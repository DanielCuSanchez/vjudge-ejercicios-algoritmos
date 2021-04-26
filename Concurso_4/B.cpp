/*
    Daniel Cu Sanchez
    A01703613
*/

//B - Problem 58B


#include <iostream>
using namespace std;

int main()
{
    int denomination;
    cin >> denomination;
    while (denomination != 1)
    {
        cout << denomination  << " ";
        for (int i = 2; i <= denomination ; ++i)
        {
            if (denomination  % i == 0)
            {
                denomination = denomination  / i;
                break;
            }
        }
    }
    cout << denomination ;
    return 0;
}