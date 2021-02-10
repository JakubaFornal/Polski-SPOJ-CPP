#include <iostream>

using namespace std;

long long PowerModuloFast(int a, int b, int m)
{
    int i;
    long long result = 1;
    long x = a % m;

    for (i = 1; i <= b; i <<= 1)
    {
        x %= m;
        if ((b & i) != 0)
        {
            result *= x;
            result %= m;
        }
        x *= x;
    }

    return result;
}

int main()
{
    int a, b, c;
    while (true)
    {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0)
            break;
        cout << PowerModuloFast(a, b, c) << "\n";
    }
    return 0;
}