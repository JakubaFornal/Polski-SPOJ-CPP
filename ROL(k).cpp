#include <iostream>

using namespace std;
int r, x, k;
int tab[10001];

int main()
{
    cin >> k >> r;

    for (x = 0; x < k; x++)
        cin >> tab[x];

    for (x = r; x < k; x++)
        cout << tab[x] << " ";

    for (x = 0; x < r; x++)
        cout << tab[x] << " ";

    return 0;
}
