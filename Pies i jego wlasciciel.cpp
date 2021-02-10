#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

float n, v1, v2, t, s, x;

int main()
{
    cin >> n >> v1 >> v2;

    t = n / v1;
    s = v2 * t;
    cout << s;

    return 0;
}
