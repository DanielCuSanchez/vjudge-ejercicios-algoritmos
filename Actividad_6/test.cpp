
#include <iostream>

using namespace std;
#define REP( i , n ) for(int i = 0 ;  i < n ; i++)
int main(){
	int n;
	cin >> n;
	if( n < 4){
		cout << "-1";
		return 0;
	}
	int numero7 = n / 7; //12.5
	int rem = n % 7; //4
	int numero4= rem / 4; //1
	int puedeSer4 = rem % 4; //0

	if( puedeSer4 != 0 ){
		if( numero7 >= puedeSer4 ){
			numero4 += ( ( 7 * puedeSer4) + puedeSer4 ) / 4;
			numero7 -= puedeSer4;
		}
		else{
			cout<<"-1";
			return 0;
		}
	}
	REP(i,numero4)
		cout<<"4";
	REP(i,numero7)
		cout<<"7";
}