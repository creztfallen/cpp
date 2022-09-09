#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int n1, n2, res;
    char opc;

start:

    system("clear");

    cout << "\nDigite o valor da nota 1: ";
    cin >> n1;
    cout << "\nDigite o valor da nota 2: ";
    cin >> n2;

    res = n1 + n2;

    /*
    Notas:
        >= 60 - Aprovado
        >=40 && < 60 - Recuperação
        < 40 - Reprovado
    */

    if (res >= 60)
    {
        cout << "\nAluno aprovado!" << endl;
    }
    else if (res >= 40)
    {
        cout << "\nAluno em recuperação!" << endl;
    }
    else
    {
        cout << "\nAluno reprovado!" << endl;
    }

    cout << "\nDigitar outras notas? [s/n]: ";
    cin >> opc;

    if (opc == 's' || opc == 'S')
    {
        goto start;
    }
    else
    {
        cout << "\n Programa finalizado." << endl;
    }

    return 0;
}