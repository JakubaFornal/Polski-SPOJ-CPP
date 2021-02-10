#include <iostream>

using namespace std;
int t;
int ile;
int liczby[101];

int main()
{

    cin >> t;

    while (t--)
    {
        cin >> ile;
        for (int i = 0; i < ile; i++)
        {
            cin >> liczby[i];
        }

        for (int i = 1; i < ile; i++)
        {
            cout << liczby[i] << " ";
        }
        cout << liczby[0] << endl;
    }
    return 0;
}
