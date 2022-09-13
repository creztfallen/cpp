#include <iostream>

using namespace std;

int main()
{
    string v = "Car";
    string *p;

    p = &v;

    cout << p << "\n"
         << &v << endl;

    *p = "Truck";

    cout << "\n"
         << v << "\n"
         << *p << endl;

    return 0;
}