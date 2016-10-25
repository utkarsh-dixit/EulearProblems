#include <iostream>

using namespace std;

int main()
{
    // 1^2 +2^2+3^2+...+n^2 = n(n+1)(2n+1)/6 ---> (1)
    // 1+2+3+4+..+n = n(n+1)/2   ----> (2)
    // Substracting (1) from (2), we get
    // (3n*n+2n)(n*n-1)/12
    int n = 100;
    int answer = (3 * (n*n) + (2*n))*((n*n)-1)/12;
    cout << "DIFF BETWEEN THEM IS :" << answer <<endl;
   return 0;
}


