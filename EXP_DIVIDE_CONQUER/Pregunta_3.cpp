// Daniel Cu Sánchez - A01703613

// PREGUNTA 3

/*
  (10 puntos) Explica porqué seleccionaste esa aproximación para la solución del problema.
  En este ejercicio se aplica iteración con el fin de partir el problema en pedazos más pequeños.
  Sin embargo como consideración es importante que un paso antes de llamar al algoritmo que busca el numero faltante, utilizo el sorteo para ordernarlo de menor a mayor.
*/

// (20 puntos) Implementa, en pseudocódigo, la solución propuesta.
#include <iostream>
using namespace std;

// Function to get the missing number
int obtenerNumeroFaltante(int arreglo[], int n)
{
  int total = (n + 1) * (n + 2) / 2;
  for (int i = 0; i < n; i++){
    total -= arreglo[i];
  }
  //retornamos el numero faltante
  return total;
}

int main()
{
  int arreglo[2, 3, 8, 4, 5, 1, 7, 9, 0];
  int n = sizeof(arr) / sizeof(arr[0]);
  //ordeno el arreglo antes de mandarlo al agoritmo de busqueda
  sort(arreglo, arreglo + n);
  //Funcion que busca numero faltante
  int numeroFaltante = obtenerNumeroFaltante(arr, n);
  cout << "El numero faltante es: " << numeroFaltante;
  return 0;
}