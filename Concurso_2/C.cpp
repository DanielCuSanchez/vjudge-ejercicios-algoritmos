/*
    Daniel Cu Sanchez
    A01703613
*/

//C - Dreamoon and Sums
#include <iostream>
using namespace std;
const int mod = 1e9 + 7;
long long a, b, x, y, resultado;
int main()
{
    cin >> a >> b;
    x = (b * (b - 1) / 2) % mod;
    y = (a * (a + 1) / 2) % mod;
    resultado = (x * ((y * b) % mod + a) % mod) % mod;
    printf("%lld\n", resultado);
}