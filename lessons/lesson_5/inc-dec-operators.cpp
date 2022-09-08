#include <iostream>

using namespace std;

int main()
{
    // n1=n1+10 -- n1+=10
    // n1=n1-10 -- n1-=10
    // n1=n1*10 -- n1*=10
    // n1=n1/10 -- n1/=10
    // n1++ / ++n1

    int n1 = 10;

    cout << n1++ << endl
         << n1 << endl;

    return 0;
}