#include <iostream>

using namespace std;
int ile;
unsigned long long x, y;

int main()
{
    cin >> ile;
    while (ile--)
    {
        cin >> x >> y;
        x--;

        if ((x == 0) && y > 0)
            cout << "TAK" << endl;
        else if (y < x)
            cout << "TAK" << endl;
        else if ((y % x) > 0)
            cout << "TAK" << endl;
        else if (y == 0)
            cout << "NIE" << endl;
        else
            cout << "NIE" << endl;
    }
    return 0;
}