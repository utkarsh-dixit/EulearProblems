#include <iostream>
using namespace std;
long int number = 600851475143;
int main(){
    long int denominator = 2;
    long int factor = 1;
    while(number!=denominator){
        if(number%denominator==0){
              number = number/denominator;
        }
        else{
                 if(denominator==2)
                        denominator = 3;
                 else
                    denominator+=2;
        }
        
    }
        cout << "LARGEST PRIME NUMBER IS :" << number <<endl; 
    return 0 ;
}

