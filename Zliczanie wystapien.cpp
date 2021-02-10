#include <iostream>

using namespace std;

int x, y, q, punkty;

int main()
{
    while (cin >> x)
    {
        cin >> q;
        int tab[q];
        for (int j = 0; j < q; j++)
        {
            cin >> tab[j];
        }
        punkty = 0;
        for (int i = 0; i < q; i++)
        {
            if (tab[i] == x)
                punkty++;
        }
        cout << punkty << endl;
    }
    return 0;
}
