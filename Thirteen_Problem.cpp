#include<iostream>
#include<string>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
void split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        elems.push_back(item);
    }
}


vector<string> split(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}

string getnZeros(int n){
    string zerostring = "";
    for(int i=0;i<n;i++){
        zerostring+="0";
    }
    return zerostring;
}
string addTwoNumbers(string number1,string number2){
    long int diff = number2.length()-number1.length();
    if(diff!=0){
       
    // Lets make the equal in length first of all.... For the calculation
    if(number2.length()>number1.length()){
        
        long int diff1 = number2.length()- number1.length();
        number1 = getnZeros(diff1) + number1;
    }
    else{
       long  int diff1 = number1.length() - number2.length(); 
        
          number2 = getnZeros(diff1) + number2;
    }
    }
    // So now length of both the number is equal
    string final_result = "";
    int carry = 0;
    for(long int i=number1.length()-1;i>=0;i--){
        // Now lets begin our adding
         long int f = number1[i]-'0';
         long int s = number2[i]-'0';
         long int sum = f+s+carry;
        if(i==0){
            // Its the last one so we can put whole number
             final_result = to_string(sum)+final_result;
        }
        else{
          
            if(sum>=10){
                long int l = sum%10;
                long int l2 = (sum-l)/10;
                carry = l2;
                final_result = to_string(l)+final_result;
            }
            else{
                carry = 0;
                final_result = to_string(sum)+final_result;
            }
        }
    }

    return final_result;
}
int main(){

      std::ifstream ifs("main.txt");
  std::string str( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
vector<string> x = split(str, '\n');
string sum="0";
for(int k=0;k<x.size();k+=2){
    sum = addTwoNumbers(sum,addTwoNumbers(x[k],x[k+1]));
}

  cout << "FIRST 10 Digits are:" << endl;
  for(int a=0;a<10;a++){
      cout << sum[a];
  }
  cout <<endl;
    return 0;
}
