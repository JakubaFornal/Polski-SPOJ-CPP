#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n = 10000;
    bool liczby[n + 1];
    for (int i = 1; i <= n; i++)
    {
        liczby[i] = true;
    }
    liczby[1] = false;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (liczby[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                liczby[j] = false;
            }
        }
    }
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        int liczba;
        cin >> liczba;

        if (liczby[liczba] == true)
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    return 0;
}
