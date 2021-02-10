#include <iostream>

using namespace std;

int ile;
int iloczyny[11] = {1, 3, 7, 9, 1, 3, 7, 9, 1, 3, 1};
char x[12];

int main()
{
    cin >> ile;

    while (ile--)
    {
        cin >> x;
        int suma = 0, sumay = 0;

        for (int j = 0; j < 11; j++)
        {
            suma = (x[j] - '0') * iloczyny[j];
            sumay += suma;
        }

        if (sumay > 0 && (sumay % 10) == 0)
            cout << "D" << endl;

        else
            cout << "N" << endl;
    }
    return 0;
}