#include <iostream>

using namespace std;

int NWD(int a, int b)
{
    int pom;

    while (b != 0)
    {
        pom = b;
        b = a % b;
        a = pom;
    }
    return a;
}

int a, b, x;

int main()
{
    cin >> x;

    for (int i = 1; i <= x; i++)
    {
        cin >> a >> b;

        cout << a / NWD(a, b) * b << endl;
    }
    return 0;
}
