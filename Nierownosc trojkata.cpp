#include <iostream>

using namespace std;
int ile;
float x, y, z, d;

int main()
{
    for (; cin >> x >> y >> z;)
    {
        if ((x + y) > z && (x + z) > y && (y + z) > x && x > 0 && y > 0 && z > 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}
