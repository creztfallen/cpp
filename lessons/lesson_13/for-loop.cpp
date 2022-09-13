#include <iostream>

using namespace std;

int main()
{
    int c, d;

    for (int tmp = 0; tmp < 1000000000; tmp++)
        ;

    for (c = 0, d = 1; c <= 10; c++, d += 2)
    {
        cout << c << " - " << d << endl;
    }

    return 0;
}