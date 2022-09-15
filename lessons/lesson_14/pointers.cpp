#include <iostream>

using namespace std;

int main()
{
     //     string v = "Car";
     //     string *p;

     //     p = &v;

     //     cout << p << "\n"
     //          << &v << endl;

     //     *p = "Truck";

     //     cout << "\n"
     //          << v << "\n"
     //          << *p << endl;

     int *p;
     int v[10];

     p = v; // p=&v[0];

     for (int i = 0; i < 10; i++)
     {
          *(p + i) = i;
          cout << v[i] << endl;
     }

     // p = &v[1]; // *(p++)

     // cout << p << endl;

     // p = &v[2]; // *(p++)

     // cout << p << endl;

     // p = &v[3]; // *(p++)

     // cout << p << endl;

     // p = &v[4]; // *(p++)

     // cout << p << endl;

     // p = &v[5]; // *(p++)

     // cout << p << endl;

     return 0;
}