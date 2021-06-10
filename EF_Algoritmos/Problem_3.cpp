/*

Daniel Cu Sánchez - A01703613


¿Cuál técnica de solución de problemas que emplearás? Explica el porqué de tu selección. (15%)

R=Ocupe una solución avida, mediante el uso de ciclos y comparaciones. Esta lógica de este programa esta abstraida en una funcion
llamada cambio de monedas.

Desarrolla un algoritmo que dé solución al problema seleccionado. (70%)

R=La solución se encuentra abajo documentada.

¿Cuál es la complejidad del algoritmo que desarrollaste? (15%)

complejidad o(n^2) para el peor de los casos


*/

#include<bits/stdc++.h>
using namespace std;

int cambiosDeMonedas(int tiposMonedas[], int cantidadMonedas, int moneda )//Recibe los tipos de moneadas, cantidad de monedas, moneda a cambiar
{
    int listaDeCambio[moneda + 1];
    memset(listaDeCambio, 0, sizeof(listaDeCambio)); //La función memset copia el valor de c (convertido a un unsigned char) a cada uno de los primeros n caracteres en el objeto al cual señala s. La función memset devuelve el valor de s. char *strerror ( int errnum); La función strerror relocaliza el número de error en errnum a una cadena de mensaje de error.
    listaDeCambio[0] = 1;
    for(int i=0; i < cantidadMonedas; i++)
    {
      for(int j = tiposMonedas[i] ; j <= moneda; j++ )
      {
        listaDeCambio[j] += listaDeCambio[j-tiposMonedas[i]];
      }
    }
    return listaDeCambio[moneda];
}

int main()
{
    int tiposMonedas[] = {1,5,10,25,50}; //EslistaDeCambiocer los tipos de monedas en un arreglo
    int cantidadMonedas = 5; //cantidad de monedas totales
    int moneda; //moneda a cambiar
    while(cin >> moneda) //repite hasta que se finalice manual esto para estar cambiando monedas
    {
      cout << cambiosDeMonedas(tiposMonedas,cantidadMonedas, moneda) << endl;//Invoca función de las monedas
    }

    return 0;
}