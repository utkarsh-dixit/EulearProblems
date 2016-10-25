#include <iostream>

using namespace std;

int main()
{
// Given a+b+c=1000 such that a^2+b^2=c^2 and a<b<c
int sumNo = 10000;

for(int c=1;c;c++){
    bool doubleFindYa = false;
    for(int b=c-1;b>0;b--){
        bool findYa = false;
        for(int a=1;a<b;a++){
            // Here a<b<c
            if((a+b+c)==sumNo && ((a*a)+(b*b)) == (c*c)){
                cout << "PRODUCT IS:" << a*b*c << endl;
                
                findYa = true;
                break;
            }
        }
        if(findYa){
            doubleFindYa= true;
            break;
        }
    }
    if(doubleFindYa){
        break;
    }
}
   return 0;
}


