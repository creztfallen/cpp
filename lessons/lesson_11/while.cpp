#include <iostream>

using namespace std;

int main()
{
    int c = 0;
    while (c < 20)
    {
        cout << c << endl;
        if (c == 10)
        {
            break;
        }
        c++;
    }

    cout << "\nRotina finalizada"
         << endl;
    return 0;
}