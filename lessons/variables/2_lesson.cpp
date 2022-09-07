#include <iostream>

using namespace std;

int main()
{
    int lives = 0;
    char character = 'm';
    char characters[20];
    double decimal = 8.3; // 2.49999
    float decimal2 = 8.3; // 2.5
    bool alive = true;
    string name = "Mateus";

    cout << "Type the number of lives: ";
    cin >> lives;
    cout << "Type a character: ";
    cin >> character;
    cout << "Money amount: ";
    cin >> decimal;
    cout << "Type your name: ";
    cin >> name;

    lives = 2;

    cout << "Lives: " << lives << endl;
    cout << "Character: " << character << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Second decimal: " << decimal2 << endl;
    cout << "Alive: " << alive << endl;
    cout << "Name: " << name << endl;

    return 0;
}