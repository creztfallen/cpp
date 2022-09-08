#include <iostream>

using namespace std;

int n1, n2; // global

int main()
{
    int n3, n4; // local
    int res1, res2;

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    // res = (n1 + n2 + n3 + n4) - 10;
    res1 = n1 / n2;
    res2 = n1 % n2;

    cout << "Div: " << res1 << endl
         << "Mod: " << res2 << endl;

    return 0;
}