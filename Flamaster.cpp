#include <iostream>

using namespace std;

int main()
{
    int ile, q, i;
    char p;
    char literki[200];

    cin >> ile;
    ++ile;

    while (--ile)
    {
        cin >> literki;

        for (i = 0; literki[i] != '\0'; ++i)
        {
            if (literki[i] == literki[i + 1] && literki[i + 1] == literki[i + 2])
            {
                p = literki[i];
                q = 2;

                while (literki[i + q] == p)
                {
                    ++q;
                }

                cout << literki[i] << q;
                i += q;
                --i;
            }

            else
            {
                cout << literki[i];
            }
        }
        cout << endl;
    }
    return 0;
}
