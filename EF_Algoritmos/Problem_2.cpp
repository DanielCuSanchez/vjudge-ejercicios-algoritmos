/*

Daniel Cu Sánchez - A01703613


¿Cuál técnica de solución de problemas que emplearás? Explica el porqué de tu selección. (15%)

R=Ocupe una solución iterativa, mediante el uso de ciclos y comparaciones.

Desarrolla un algoritmo que dé solución al problema seleccionado. (70%)

R=La solución se encuentra abajo documentada.

¿Cuál es la complejidad del algoritmo que desarrollaste? (15%)

complejidad o(n)


*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int total, r, i, j, max;

    cin >> total;

    while( total-- ){
      cin >> r;
      int arregloParientes[r], distancias = 0 ,x;
      max = 1000000000;

      for( i = 0; i < r ; i++ ){
        cin >> arregloParientes[i];
      }

      sort(arregloParientes , arregloParientes+r); //Ordena el arreglo de info

      x=arregloParientes[r/2];

      for( i = 0; i < r ; i++ ){
        distancias += abs(x-arregloParientes[i]);
      }
      cout << distancias <<endl; //Imprime la suma mínima de distancias desde la casa óptima de Vito hasta cada uno de sus parientes. La distancia entre dos números de calles si y sj es dij = ABS(si - sj).

    }
    return 0;
}
