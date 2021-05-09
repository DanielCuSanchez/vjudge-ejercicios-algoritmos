
/*
    Alexander Delgado
    A01704868

    Daniel Cu Sanchez
    A01703613
*/

/*
  A - Lucky Sum of Digits
*/

#include <iostream>
using namespace std;
 

int main()
{
  int suma; 

  cin >> suma;

  int numero4  = 0;
  int numero7 = 0;

  while (suma > 0){
    if (suma % 7 == 0){
      numero7++;
      suma -= 7;
    }
    else if (suma % 4 == 0){
      numero4 ++;
      suma -= 4;
    }
    else{
      numero4 ++;
      suma -= 4;
    }
  }
  if (suma < 0){
    cout << "-1";
    return 0;
  }
  for (int i=0; i < numero4 ; i++){
    cout << "4";
  }
  for (int i=0; i < numero7; i++){
    cout << "7";
  }

  return 0;
}