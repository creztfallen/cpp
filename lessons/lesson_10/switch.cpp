#include <iostream>

using namespace std;

int main()
{
    int val;
    char x;

repeat:
    system("clear");

    cout << "\nSelecione uma cor:\n";
    cout << "[1-3] = Verde, [4-6] = Azul, [7-9] = Vermelho"
         << endl;

    cin >> val;

    switch (val)
    {
    case 1:
    case 2:
    case 3:
        cout << "\nCor selecionada: Verde\n"
             << endl;
        break;
    case 4:
    case 5:
    case 6:
        cout << "Cor selecionada: Azul\n"
             << endl;
        break;
    case 7:
    case 8:
    case 9:
        cout << "Cor selecionada: Vermelho\n"
             << endl;
        break;
    default:
        cout << "Valor Inválido\n"
             << endl;
    }

    cout << "Tentar novamente? [s/n]: ";
    cin >> x;

    if (x == 's' || x == 'S')
    {
        goto repeat;
    }
    else
    {
        cout << "\nPrograma finalizado\n"
             << endl;
    }

    return 0;
}