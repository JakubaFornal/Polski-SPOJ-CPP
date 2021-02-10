#include <iostream>

using namespace std;
int q, n, x, y;

int main()
{
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        cin >> n >> x >> y;

        for (int a = 2; a < n; a++)
            if (a % x == 0 && a % y != 0 && a < n < 100000)
            {
                cout << a << " ";
            }
        cout << endl;
    }
    return 0;
}
