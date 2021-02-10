#include <iostream>

using namespace std;

int ile, x, y, z = 2;

int main()
{
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {
        cin >> x >> y;
        if (0 <= x, y <= 1000000)

            do
            {
                if (x > y)
                {
                    x = x - y;
                }
                else
                {
                    y = y - x;
                }
            } while (x != y);
        cout << x << endl;
    }
    return 0;
}