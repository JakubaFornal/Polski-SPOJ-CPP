#include <iostream>

using namespace std;
int punkty = 0;
int y, x;

int main()
{
    cin >> y;
    cout << y << endl;
    while (punkty < 3)
    {
        cin >> x;
        if (x == 42 && y != 42)
        {
            punkty++;
        }
        cout << x << endl;
        y = x;
    }
    return 0;
}
