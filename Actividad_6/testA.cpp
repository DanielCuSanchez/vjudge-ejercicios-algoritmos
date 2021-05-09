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
#include <algorithm>
using namespace std;

int main()
{
  int n;
	cin>>n;

  if( n < 4 ) 
  {
    cout << "-1" ;
    return 0;
  }

  if( n % 4 == 0 ) 
  {
    for( int i = 0 ; i < n / 4 ; i++){
      cout << "4" ;
    }
  }

  if( n % 7 == 0 ) 
  {
    for( int i = 0 ; i < n / 7 ; i++){
      cout << "7" ;
    }
  }

  
  return 0;
}