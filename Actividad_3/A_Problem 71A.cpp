// #include <iostream>
// using namespace std;

// int main()
// {
//     string palabra;
//     int cantidadPalabras;


//     cin >> cantidadPalabras;
//     for (int i = 0; i < cantidadPalabras; i++)
//     {
//         cin >> palabra;
//         if (palabra.length() > 10)
//         {
//             cout << palabra[0] << palabra.length() - 2 << palabra[palabra.length() - 1] << endl;
//         }
//         else
//         {
//             cout << palabra << endl;
//         }
//     }
// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n = 0;

    cin >> n;

    string palabra;

    for (int i = 0; i < n; i++)
    {
        cin >> palabra;
        if (palabra.length() > 10)
        {
            cout << palabra[0] << palabra.length() - 2 << palabra[palabra.length() - 1] << endl;
        }
        else
        {
            cout << palabra << "\n";
        }
    } // for

    return 0;
}
