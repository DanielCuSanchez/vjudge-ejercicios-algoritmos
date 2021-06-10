/*

Daniel Cu Sánchez - A01703613


¿Cuál técnica de solución de problemas que emplearás? Explica el porqué de tu selección. (15%)

R=Ocupe una solución avida, mediante el uso de ciclos y comparaciones.

Desarrolla un algoritmo que dé solución al problema seleccionado. (70%)

R=La solución se encuentra abajo documentada.

¿Cuál es la complejidad del algoritmo que desarrollaste? (15%)

complejidad o(n)


*/


#include<bits/stdc++.h>

#include<stdio.h>

#include<string.h>

#include<math.h>

#include<algorithm>


using namespace std;


int main()
{
  //Establecer 3 vaariables: cantidad de numeros, numero de preguntas del jeugo, un contador de preguntas.
  int cantidad, preguntas, numeroPregunta=0;
  while (cin >> cantidad >> preguntas) {
    if ( cantidad == 0 && preguntas == 0 ){ //Condición inicial de juego si ambas son 0 no hay que jugar
      break;
    }
    int arr[cantidad];//Establecer longitud del arreglo del juego

    for ( int i = 0; i < cantidad; i++ ){
      cin>>arr[i]; //Ingresar los numeros para el juego
    }
    sort (arr, arr + cantidad); //Ordenar el arreglo de forma ascendente

    //Empieza lo interesante del juego

    //Imprimo la pregunta por cada intento
    cout << "Pregunta numero: " << ++numeroPregunta << "\n";

    //Variable de entrada de usuario
    int usuario;
    //Variable bandera que nos determina si un true or false (Encontrado o No)
    bool encontrado;

    //Recorrer la lista de cantidad de intentos
    for ( int i = 0; i < preguntas; i++ ) {

      //Ingresa numero el usuario
      cin >> usuario;
      //La bandera arranca en false
      encontrado = false;

      //Arranca a validar si encuentra el numero, recorro la cantidad incial de elementos (numeros ingresados del juego)
      for ( int j = 0; j < cantidad; j++ ) {
        if ( arr[j] == usuario ){ //Compara si encuentra el numero en alguna posición
          cout << usuario << " encontrado en " << j + 1 << "\n" ;
          encontrado = true;
          break;
          //Rompe el ciclo
        }
        else if ( arr[j] > usuario ){ //Condición que valida si no encuentra el numero
          break;
        }
      }
      if ( !encontrado ) {
        cout << usuario << " NO encontrado " << "\n" ;  // Si no lo encuentra te da la retro
      }
    }
  }
}