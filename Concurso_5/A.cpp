/*
    Daniel Cu Sanchez
    A01703613
*/

//A - Problem 218A

#include <iostream>
using namespace std;
int arreglo[105];

int main() {
int n;
int k;
cin >> n >> k;
int max = 0;
int nodos = (n*2)+1;
for(int i=0;i< nodos;i++){
	cin>>arreglo[i];
	if(arreglo[i]>max)
	max=arreglo[i];
}

for(int i=0;i< nodos;i++){
	
	if(i%2==1&&k&&(arreglo[i]-1)>arreglo[i-1]&&(arreglo[i]-1)>arreglo[i+1]){
		arreglo[i]-=1;
		--k;
	}
}
 
for( int i = 0 ; i < nodos ; i++){
	cout << arreglo[i] << " ";
}
cout<<"\n";

return 0;
}