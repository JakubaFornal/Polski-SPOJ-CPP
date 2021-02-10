#include <iostream>

using namespace std;

int main()
{
    string napis;
    int pkt = 0;

    while (getline(cin, napis))
    {
        ++pkt;
    }
    cout << pkt << endl;

    return 0;
}
