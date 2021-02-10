#include <iostream>

using namespace std;

int main()
{
    long tab[1001];
    int ile, i;
    char c;
    long x;

    cin >> ile;
    for (i = 1; i <= ile; i++)
    {
        cin >> tab[i];
    }

    cin >> c >> x;

    if (c == '>')
    {
        for (i = 1; i <= ile; i++)
        {
            if (tab[i] > x)
                cout << tab[i] << endl;
        }
    }
    if (c == '<')
    {
        for (i = 1; i <= ile; i++)
        {
            if (tab[i] < x)
                cout << tab[i] << endl;
        }
    }
    return 0;
}