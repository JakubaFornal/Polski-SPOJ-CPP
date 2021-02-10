#include <iostream>

using namespace std;

int main()
{
    int d, x, y, z, wynik;
    cin >> d;
    while (d--)
    {
        cin >> x >> y >> z;
        cout << (unsigned)(12 * (y - x / (z - 1.)) + 0.5) << endl;
    }
    return 0;
}
