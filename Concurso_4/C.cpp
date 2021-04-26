/*
    Daniel Cu Sanchez
    A01703613
*/

//C - Problem 9C

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long longNumber;

longNumber number;

int answer;
void f(longNumber x)
{
    if(x > number) return;
    answer++;
    f( x * 10 );
    f( x * 10 + 1 );

}
int main()
{
    cin>>number;

    f(1);

    cout<<answer<<endl;
    return 0;
}