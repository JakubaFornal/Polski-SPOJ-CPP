#include <iostream>
#include <cmath>

using namespace std;
int ile, ile1, i;

int main()
{
    cin >> ile;
    while (ile--)
    {
        cin >> ile1;
        int tab[ile1];
        float srednia = 0;
        for (i = 0; i < ile1; i++)
        {
            cin >> tab[i];
            srednia += tab[i];
        }

        srednia /= i;

        int najblizsza = tab[0];
        for (i = 1; i < ile1; i++)
        {
            if (fabs(tab[i] - srednia) < fabs(najblizsza - srednia))
                najblizsza = tab[i];
        }
        cout << najblizsza << endl;
    }
    return 0;
}