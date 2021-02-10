#include <iostream>

using namespace std;

int main()
{
    string napis;

    while (getline(cin, napis))
    {
        int dlugosc = napis.length();

        for (int i = dlugosc - 1; i >= 0; i--)
        {
            cout << napis[i];
        }
        cout << endl;
    }
    return 0;
}
