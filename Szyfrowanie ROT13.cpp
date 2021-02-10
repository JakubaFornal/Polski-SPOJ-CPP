#include <iostream>
#include <cctype>
using namespace std;

char rot(size_t n, char max, char curr, char trans)
{
    return trans < max - n + 1 ? curr + n : curr - n;
}

int main()
{
    char c = 0;
    while (cin.get(c))
    {
        cout.put(
            isalpha(c) ? rot(13, 'z', c, tolower(c)) : isdigit(c) ? rot(5, '9', c, c)
                                                                  : c);
    }
    return 0;
}