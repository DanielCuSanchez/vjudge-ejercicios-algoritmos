/*
    Daniel Cu Sanchez
    A01703613
*/
//B - Problem 259B

#include <iostream>

using namespace std;

int main()
{
    int e1, e2, e3, e4, e5, e6, e7, e8, e9;
    cin >> e1 >> e2 >> e3 >> e4 >> e5 >> e6 >> e7 >> e8 >> e9;
    int sum = (e2 + e3 + e4 + e6 + e7 + e8) / 2;
    e1 = sum - e2 - e3;
    e5 = sum - e4 - e6;
    e9 = sum - e7 - e8;
    cout << e1 << " " << e2 << " " << e3 << endl;
    cout << e4 << " " << e5 << " " << e6 << endl;
    cout << e7 << " " << e8 << " " << e9 << endl;
    return 0;
}