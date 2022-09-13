#include <iostream>

using namespace std;

int main()
{
    int c, f;

    for (int tmp = 0; tmp < 1000000000; tmp++)
        ;

    for (c = 0, f = 1; c <= 10; c++, f += 2)
    {
        cout << c << " - " << f << endl;
    }

    return 0;
}