/*
    Daniel Cu Sanchez
    A01703613
*/

/*
  A - Fox and Box Accumulation
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int cantidadDeCajas, cantidadDePilas = 1;
  cin >> cantidadDeCajas;
  int arregloDeCajas [cantidadDeCajas];

  for (int i = 0; i < cantidadDeCajas; i++)
  {
    cin >> arregloDeCajas[i];
  }
  sort(arregloDeCajas, arregloDeCajas + cantidadDeCajas);
  for (int i = 1; i < cantidadDeCajas; i++)
  {
    if((i)/cantidadDePilas > arregloDeCajas[i]){
      cantidadDePilas++;
    }
  }
  cout << cantidadDePilas;
  return 0;
}