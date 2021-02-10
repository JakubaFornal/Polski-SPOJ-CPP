#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;
int ile;

int main()
{
    double x, y, x1, y1, x2, y2;
    cin >> ile;
    while (ile--)
    {
        cin >> x >> y >> x1 >> y1 >> x2 >> y2;

        if ((abs(x1) - abs(x)) == (abs(x2) - abs(x1)))
            cout << "TAK" << endl;
        else
            cout << "NIE" << endl;
    }
    return 0;
}
