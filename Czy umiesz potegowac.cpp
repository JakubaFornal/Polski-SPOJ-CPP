#include <iostream>

using namespace std;

int main()
{
    int koncowki[10][4] =
        {
            {0, 0, 0, 0},
            {1, 1, 1, 1},
            {6, 2, 4, 8},
            {1, 3, 9, 7},
            {6, 4, 6, 4},
            {5, 5, 5, 5},
            {6, 6, 6, 6},
            {1, 7, 9, 3},
            {6, 8, 4, 2},
            {1, 9, 1, 9},

        };
    unsigned long long podst, wyklad;
    int ile_przypadkow;
    cin >> ile_przypadkow;
    for (int i = 0; i < ile_przypadkow; i++)
    {
        cin >> podst;
        cin >> wyklad;

        cout << koncowki[podst % 10][wyklad % 4] << endl;
    }

    return 0;
}
