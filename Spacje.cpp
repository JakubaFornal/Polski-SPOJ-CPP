#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string napis;
    unsigned int i;

    while (getline(cin, napis))
    {

        for (i = 0; i < napis.length(); i++)
        {
            if (isspace(napis[i]))
            {
                napis[i] = 0;
                napis[i + 1] = toupper(napis[i + 1]);
            }
        }
        for (i = 0; i < napis.length(); i++)
        {
            if (napis[i] != 0)
            {
                cout << napis[i];
            }
        }
        cout << endl;
    }
    return 0;
}