#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int S = 0;
    int k;
    int n = 0;
    int w = 1;
    int wynik;

    cin >> k;

    while (S < k)
    {
        S = S + pow(2, w);
        n++;
        w++;
    }

    int temp = (pow(2, n) - (S - k));

    //cout << temp << endl;
    //cout << n << endl;

    for (int i = n; i > 0; i--)
    {
        wynik = ceil(temp / pow(2, i - 1));
        if (wynik % 2 == 0)
            cout << 6;
        else
            cout << 5;
    }
    cout << "\n";

    return 0;
}