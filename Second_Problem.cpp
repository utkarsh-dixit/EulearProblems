#include <iostream>

using namespace std;
int max_value = 4000000;
int main(){
    int total=0;
    int preceeding = 1;
    int current = 2;
    while(current<=max_value){
        
        int temp = current;
        if(current%2==0){
            total+=current;
        }
        current = preceeding + current;
        preceeding =  temp;
    }
    cout << total <<endl;
    return 0;
}
