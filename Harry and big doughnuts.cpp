#include <iostream>

using namespace std;
int ile, c, k, w, x;

int main()
{
    cin >> ile;

    while (ile--)
    {
        cin >> c >> k >> w;
        x = c * w;

        if (x <= k)
            cout << "yes" << endl;

        if (x > k)
            cout << "no" << endl;
    }
    return 0;
}
