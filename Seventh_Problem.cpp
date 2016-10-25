#include <iostream>

using namespace std;
int sqrti(int x)
{
    union { float f; int x; } v; 

    // convert to float
    v.f = (float)x;

    // fast aprox sqrt
    //  assumes float is in IEEE 754 single precision format 
    //  assumes int is 32 bits
    //  b = exponent bias
    //  m = number of mantissa bits
    v.x  -= 1 << 23; // subtract 2^m 
    v.x >>= 1;       // divide by 2
    v.x  += 1 << 29; // add ((b + 1) / 2) * 2^m

    // convert to int
    return (int)v.f;
}
int main()
{
   int position = 10001;
   int found = 1;
   for(int i=3;i;i+=2){
       int root = sqrti(i);
       bool isPrime = true;
       for(int k=2;k<=root;k++){
           if(i%k==0){
             isPrime = false;
           }
       }
       if(isPrime){
           found+=1;
            if(found==position){
                cout << "THE prime number on this position is :" << i << endl;
                break;
            }
       }
   }
   return 0;
}


