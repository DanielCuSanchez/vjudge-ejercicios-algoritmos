#include <iostream>
#include <string>
using namespace std;
int main()
{
  int cantidadDeManzanas, manzanasDe100Gr = 0;
  int pesoManzana;
  cin >> cantidadDeManzanas;

  for (int i = 0; i < cantidadDeManzanas; i++)
  {
    cin >> pesoManzana;
    if (pesoManzana == 100)
    {
      manzanasDe100Gr++;
    }
  }
  if (manzanasDe100Gr % 2 == 1 || (cantidadDeManzanas % 2 == 1 && manzanasDe100Gr == 0))
  {
    cout << "NO";
  }
  else
  {
    cout << "YES\n";
  }
  return 0;
}