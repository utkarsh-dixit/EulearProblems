#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int last = 999;
int first_product;
int second_product;
int main(){
    int max = 0;
    for(int i=last;i>=100;i--){
          for(int s=last;s>=100;s--){
              int product =  i*s;
              int reverse = 0;
              int divided = product;
     while(divided>=1){
        int remainder = divided%10;
        int length = 1;
        int x = divided;
        while ( x /= 10 )
                length++;
        reverse+=remainder*(pow(10,length-1));
        divided = (divided-remainder)/10;
     }
     if(reverse==product && reverse>max){
         first_product = i;
         second_product = s;
         max = reverse;
     
     }
     }
    }
    cout << "MAX IS " <<max << " AND THE PRODUCTS ARE : "<< first_product << "," << second_product<<endl;
    return 0;
}

