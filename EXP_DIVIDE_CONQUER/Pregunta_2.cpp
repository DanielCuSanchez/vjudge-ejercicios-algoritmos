// Daniel Cu Sánchez - A01703613

// PREGUNTA 2

/*
  (10 puntos) Explica porqué seleccionaste esa aproximación para la solución del problema.
  Divide y conquista nos sugiere devidir en problemas mas pequeños en este caso recurro a la solución por medio de una iteración para ir buscando por cada elemento
*/

// (20 puntos) Implementa, en pseudocódigo, la solución propuesta.
#include <iostream>
using namespace std;

// Función divide y conquista
int buscaSumaDelElemento(int arreglo[], int suma)
{
  //auxiliar
  int j = arreglo.length - 1;
  //comparo primer numero y del ultimo hacia atras
  for(int i = 0  ; i < arreglo.length ; i++){
    if( arreglo[i] + arreglo[j] == suma){
      return true
    }
    j--;
  }
  //en caso de que no sea la suma con el primer elemento, quito el primero del arreglo e intento de nuevo
  buscaSumaDelElemento(arreglo.shift(), suma)
  //No existe suma de numeros
	return false;
}

int main()
{
	int arreglo[13, 12, 1, 100, 50, 50];
	int suma = 100;
	int mitadArreglo = sizeof(arreglo) / sizeof(arreglo[0]);
	int existieronNumeros = buscaSumaDelElemento(arreglo,  suma);
  if(existieronNumeros){
    cout << "Hay al menos 2 elementos en el arreglo que sumados sea: " << suma ;
  }else{
    cout << "No hay 2 numeros que hagan la suma: " << suma << " en el arreglo";
  }
	return 0;
}