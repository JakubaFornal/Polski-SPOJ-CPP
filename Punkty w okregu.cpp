#include <iostream>

using namespace std;

int main()
{
    int x, y, r, punkty;
    cin >> x >> y >> r;
    cin >> punkty;

    while (punkty--)
    {
        int a, b, p, q;
        cin >> a >> b;

        p = x - a;
        q = y - b;

        if (p * p + q * q > r * r)
        {
            cout << "O" << endl;
        }
        else if (p * p + q * q < r * r)
        {
            cout << "I" << endl;
        }
        else
            cout << "E" << endl;
    }

    return 0;
}
