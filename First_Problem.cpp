#include <iostream>

using namespace std;
int max_value = 1000;
int main()
{
    int total = 0;
    for(int i=1;i<max_value;i++){
        if((i%3==0)||(i%5==0)){
           total+=i;
        }
    }
    cout << "THIS IS THE TOTAL: " << total <<endl; 
    return 0;
}


