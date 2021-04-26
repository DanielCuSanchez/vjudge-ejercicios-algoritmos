/*
    Daniel Cu Sanchez
    A01703613
*/

//A - Problem 767A


#include <iostream>
#include<bits/stdc++.h>

using namespace std;
const int maxNum = 1e5+7;
int aux[maxNum],a[maxNum],b[maxNum], contador;
int main(){
  int snacks;
  cin >> snacks;
  for(int i = 1 ;i <= snacks; i++){
    cin >> a[i];
  }
  contador = snacks;
  for(int i = 1 ; i <= snacks ; i++){

    b[a[i]]=1;

    while(b[contador]){
      cout << " " << contador;
      contador--;
    }
    cout << "\n";
  }
}