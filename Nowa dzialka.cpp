#include <iostream>
#include <cmath>

using namespace std;

int x;

int main()
{
    cin >> x;
    int tab[x];

    for (int i = 0; i < x; i++)
    {
        int y;
        cin >> y;
        cout << y * y << endl;
    }

    return 0;
}
