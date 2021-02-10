#include <iostream>

using namespace std;
int ile, x, y, i;

int main()
{
    cin >> ile;
    while (ile--)
    {
        cin >> x >> y;
        if (x == y)
        {
            i = y + x;
            cout << i << endl;
        }
        else
        {
            while (x != y)
            {
                if (y % x == 0)
                {
                    cout << 2 * x << endl;
                    break;
                }
                if (x % y == 0)
                {
                    cout << 2 * y << endl;
                    break;
                }
                if (x < y)
                {
                    y = y % x;
                }
                else
                {
                    x = x % y;
                }
            }
        }
    }
    return 0;
}