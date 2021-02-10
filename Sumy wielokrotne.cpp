#include <iostream>

using namespace std;
long long x;
long long y = 0;
long long z = 0;

int main()
{
    while (cin >> x)
    {
        y += x;

        if (x == 0)
        {
            cout << y << endl;
            z += y;
            y = 0;
        }
    }
    cout << z << endl;
    return 0;
}
