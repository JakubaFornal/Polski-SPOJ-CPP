#include <iostream>

using namespace std;
int x, y, i, j;
int main()
{
    int tab[200][200];

    cin >> x >> y;

    for (i = 0; i < x; ++i)
    {
        for (j = 0; j < y; ++j)
        {
            cin >> tab[i][j];
        }
    }
    for (i = 0; i < y; ++i)
    {
        for (j = 0; j < x; ++j)
        {
            cout << tab[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}