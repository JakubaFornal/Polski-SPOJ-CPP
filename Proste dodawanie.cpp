#include <iostream>

using namespace std;

int t, n, liczba, suma;

int main()
{
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n;
        int liczba[n];
        int suma = 0;

        for (int j = 1; j <= n; j++)
        {
            cin >> liczba[j];
            suma += liczba[j];
        }
        cout << suma << endl;
    }

    return 0;
}
