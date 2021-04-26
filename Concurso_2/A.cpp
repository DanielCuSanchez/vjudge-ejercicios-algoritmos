/*
    Daniel Cu Sanchez
    A01703613
*/

//A - Oath of the Night's Watch

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cantidad;
    cin >> cantidad;
    int contador = 0;
    int arreglo[cantidad];
    for (int i = 0; i < cantidad; i++)
    {
        cin >> arreglo[i];
    }
    sort(arreglo, arreglo + cantidad);
    for (int i = 0; i < cantidad; i++)
    {
        if (arreglo[i] > arreglo[0] && arreglo[i] < arreglo[cantidad - 1]){
            contador++;
        }
    }
    cout << contador;
    return 0;
}