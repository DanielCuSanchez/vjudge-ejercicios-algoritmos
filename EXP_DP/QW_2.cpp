/*
    Daniel Cu Sanchez
    A01703613
*/

/*

Una agencia de turismo realiza planificaciones de viajes aéreos. Para ir de una ciudad A a B puede ser necesario tomar varios vuelos distintos. El tiempo de un vuelo directo de I a J será T[I, J] (que puede ser distinto de T[J, I]). Hay que tener en cuenta que si tomamos un vuelo (de A a B) y después otro (de B a C) será necesario esperar un tiempo de “escala” adicional en el aeropuerto (almacenado en E[A, B, C]). Desarrolla un algoritmo del tipo Programación Dinámica que resuelva este problema.


*/

#include <iostream>
using namespace std;

//recibiria los argumentos de los vuelos en un matriz
int tiempoMinimo(int tiempoVuelo[])
{
  //ocuparia un arreglo de respuesta
	int tiempoVueloMinimo[0][0];

  //ocuparia un otro de respuesta en costo
  int costo[0][0];

	for (int i = 1; i <= m; i++){
    for (int j = 1; j <= n; j++){
      //invoco la funcion auxiliar y trato de comparar el costo minimo
			tiempoVuelo[i][j] = min(tiempoVuelo[i - 1][j - 1],tiempoVuelo[i - 1][j],
          tiempoVuelo[i][j - 1]) + costo[i][j];
    }
  }

	return tiempoVueloMinimo[m][n];
}

/* Funcion auxiliar que regresa minimo de 3 */
int min(int x, int y, int z)
{
if (x < y)
	return (x < z)? x : z;
else
	return (y < z)? y : z;
}

int main()
{
  int cantidadVuelos;
  cin >> cantidadVuelos;
  int tiempoVuelo[cantidadVuelos];
  for (i = 0; i <= cantidadVuelos; i++){
    tiempoVuelo.push([2]);
  }

  cout << "El tiempo minimo" << tiempoMinimo(tiempoVuelo);
  return 0;
}
