#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long int limit = 2000000;
    long int total = 2;
    for(long int i=3;i<limit;i+=2){
        bool isPrime = true;
        long int sqrtW = sqrt(i);
        for(long int k=3;k<=sqrtW;k+=2){
            // It wouldn't be even either way
            if(i%k==0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            total+=i;
        }
    }
    cout << "THE TOTAL BELOW LIMIT IS :" << total <<endl;
    return 0;
}
