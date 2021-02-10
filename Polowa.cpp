#include <iostream>

using namespace std;
int n = 1;

int main()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string napis;
        cin >> napis;

        int dlugosc = napis.length();

        for (int i = dlugosc - (dlugosc); i < dlugosc / 2; i++)
        {
            cout << napis[i];
        }
        cout << endl;
    }
    return 0;
}
