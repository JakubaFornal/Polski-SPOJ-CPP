#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double x, y, z;
    while (cin >> x >> y >> z)
    {
        int tab[] = {x, y, z};
        sort(tab, tab + 3);
        if (tab[0] + tab[1] <= tab[2])
        {
            cout << "brak\n";
        }
        else if (tab[0] * tab[0] + tab[1] * tab[1] == tab[2] * tab[2])
        {
            cout << "prostokatny\n";
        }
        else if (tab[0] * tab[0] + tab[1] * tab[1] > tab[2] * tab[2])
        {
            cout << "ostrokatny\n";
        }
        else
        {
            cout << "rozwartokatny\n";
        }
    }
}