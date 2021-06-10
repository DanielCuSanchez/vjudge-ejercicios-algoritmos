/*
    Daniel Cu Sanchez
    A01703613
*/
//A - Problem 268A

#include <iostream>
#include <vector>

using namespace std;

int main() {

  int equipos;
  cin >> equipos;
  int cantidad = 0 ;
  vector<int> locales(equipos), visitantes(equipos);

  for (int i = 0; i < equipos; ++i) {

    cin >> locales[i] >> visitantes[i];
    for (int j = 0; j < i; ++j) {

      if (locales[i] == visitantes[j]) {
        cantidad += 1;
      }

      if (visitantes[i] == locales[j]) {
        cantidad += 1;
      }
    }
  }

  cout << cantidad << endl;
  return 0;
}