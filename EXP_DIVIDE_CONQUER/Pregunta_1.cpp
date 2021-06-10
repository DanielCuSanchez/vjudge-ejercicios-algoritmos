// Daniel Cu Sánchez - A01703613

// PREGUNTA 1

/*
  (10 puntos) Explica porqué seleccionaste esa aproximación para la solución del problema.
  Divide y conquista nos sugiere devidir en problemas mas pequeños ya sea con iteracion o recursion.
  Elegi una busqueda con recursion para poder ir contando la cantidad de ocurrencias sobre cada iteración y guardarla en una variable auxiliar de conteo
*/

// (20 puntos) Implementa, en pseudocódigo, la solución propuesta.
#include <iostream>
using namespace std;

// Función divide y conquista
int cuentaNumeroOcurrencias(int arreglo[], int izquierda, int derecha, int numeroBusqueda, int contador)
{
  //En base a que si el numero de busqueda cumple con alguno de estos casos
	if (derecha >= izquierda) {

		int mitad = izquierda + (derecha - izquierda) / 2;

    // En casid e que el numero de busqueda se encuentra incrementamos contador
		if (arreglo[mitad] == numeroBusqueda)
      contador++;
			return contador;

		if (arreglo[mitad] > numeroBusqueda){
			return cuentaNumeroOcurrencias(arreglo, izquierda, mitad - 1, numeroBusqueda, contador);
    }

		return cuentaNumeroOcurrencias(arreglo, mitad + 1, derecha, numeroBusqueda, contador);
	}
  //No existe el numero que se busca para contar ocurrencias
	return -1;
}

int main()
{
	int arreglo[1, 1, 1, 1, 0, 0];
	int quieroBuscar = 0;
	int mitadArreglo = sizeof(arreglo) / sizeof(arreglo[0]);
	int cantidadDelNumero = cuentaNumeroOcurrencias(arreglo, 0, mitadArreglo - 1, quieroBuscar, 0);
  // De acuerdo al retorno toma un dictamen :)
  if(cantidadDelNumero == -1){
    cout << "No hay " << quieroBuscar << "en el arreglo";
  }else{
    cout << "El numero" << quieroBuscar << "tuvo " << cantidadDelNumero << "ocurrencias";
  }
	return 0;
}