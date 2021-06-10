/*
    Daniel Cu Sanchez
    A01703613

    Pregunta 3: Jill
*/
#include <iostream>
using namespace std;

int main() {
  int cantidad = 1000;
  int n[cantidad];
  cin >> b;

  // Básicamente, escanee las paradas e incremente una suma.
  // Se almacena la suma como máximo cuando sea mayor que el máximo actual.
  for(int i = 1; i <= b; i++) {
    cin >> s;
    n[0] = 0;
    for(int j = 1; j < s; j++){
      cin >> n[j];
    }

    int a = 0;
    int b = 0;
    int c = 0;
    int sum = 0;
    int max = 0;

    for(int j = 1; j < s; j++) {
        sum += n[j];
        if(sum > max || (sum == max && j - a > b - c)) {
            max = sum;
            b = j;
            c = a;
        }
        //Si la suma alguna vez esta por debajo de 0,se reinicia a 0 y es como nuestro nuevo punto de inicio
        if(sum < 0) {
            a = j;
            sum = 0;
        }
      }
      //Si el máximo no es mayor que 0, Jill nunca viajará en el autobús.
      if(max > 0){
        cout << "La mejor ruta agradable" << i << "es la parada" << c + 1  << " y entre la parada" <<  b + 1;
      }
      else{
        cout << "La ruta " << i << "no tiene escalas agradables.";
      }
  }
}