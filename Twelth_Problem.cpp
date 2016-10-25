#include <iostream>

using namespace std;
long int total_factors(long int number){
    //Remeber that if 2^2*3^5 is the prime factor of any number than
    // Total no of factors that it has is (2+1)*(5+1)
    if(number==1){
        // It will break otherwise
        return 1;
    }
    long int denominator = 2;
    long int factor = 1;
    long int divisors = 1; // Its natural
    long int lastS = 0;
    long int product  = 1;
    while(number!=denominator){
        if(number%denominator==0){
              number = number/denominator;
            lastS++;
        }
        else{
            if(lastS!=0){
            product = product*(lastS+1);
}
            lastS = 0;
                 if(denominator==2)
                        denominator = 3;
                 else
                    denominator+=2;
                lastS= 0 ;
            
        }
        
    }
    product = product* (2); // We didn't counted for the last factor, so well do it here
    return product;
}
int main()
{
    long int index = 1;
    long int divisors = 1;
    long int desired_number=0;
    long int last = 0;
    while(divisors<500){
        desired_number = last + index;
        last = desired_number;

        divisors = total_factors(desired_number) ;
      
      
       index++;
    }
    cout << "THIS IS THE DESIRED NUMBER: " << desired_number <<endl;
    return 0;
}


