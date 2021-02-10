#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string wyrazy;

    while (getline(cin, wyrazy))
    {
        int liczby = 0;
        int slowa = 0;

        if (isalpha(wyrazy[0]))
            slowa++;
        else
            liczby++;

        for (unsigned int i = 1; i < wyrazy.length(); i++)
        {
            if (isspace(wyrazy[i]))
            {
                if (isdigit(wyrazy[i + 1]))
                    liczby++;
                else
                    slowa++;
            }
        }
        cout << liczby << " " << slowa << endl;
    }

    return 0;
}