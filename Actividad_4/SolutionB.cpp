#include <iostream>
#include <string>
using namespace std;
int main()
{
  int cantidadDeManzanas, pesoTotalManzanas = 0;
  int pesoManzana;
  cin >> cantidadDeManzanas;

  for (int i = 0; i < cantidadDeManzanas; i++)
  {
    cin >> pesoManzana;
    pesoTotalManzanas += pesoManzana;
  }

  if ((pesoTotalManzanas % 100) % 2 == 1)
  {
    cout << "NO";
  }
  else
  {
    cout << "YES\n";
  }
  return 0;
}