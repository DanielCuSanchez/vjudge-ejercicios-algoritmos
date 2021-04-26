#include <iostream>
using namespace std;

int main(){

    string palabra, hello = "hello";

    cin >> palabra; //Holamundo

    if(palabra.length() < 5){
        cout << "NO";
        return 0;
    }

    int j = 0, acum = 0;

    for ( int i = 0 ; i < palabra.length(); i++){

        //ahhellllloou == hello
        //hello == hello
        if( palabra[i] == hello[j] ){
            j++;
            acum++;
        }

    }

    if( acum == 5){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}