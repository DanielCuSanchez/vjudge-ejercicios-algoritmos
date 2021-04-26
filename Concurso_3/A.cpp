/*
    Daniel Cu Sanchez
    A01703613
*/

//A - Problem 160A

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
  int numberOfCoins, a[100], sum = 0, ans = 0, counter = 0;
  cin >> numberOfCoins;
  for (int i = 0; i < numberOfCoins; i++)
  {
    cin >> a[i];
  }
  sort(a, a + numberOfCoins);
  for (int i = 0; i < numberOfCoins; i++)
  {
    sum += a[i];
  }
  sum = sum / 2;
  while (ans <= sum)
  {
    ++counter;
    ans += a[numberOfCoins - counter];
  }
  cout << counter;
  return 0;
}