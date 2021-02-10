#include <iostream>

using namespace std;

int main()
{
    int hwschodu, minwschodu, hzachodu, minzachodu, h, m, czasw, czasz, czas;
    char z;

    cin >> hwschodu >> z >> minwschodu;
    cin >> hzachodu >> z >> minzachodu;
    cin >> h >> z >> m;

    czasw = hwschodu * 60 + minwschodu;
    czasz = hzachodu * 60 + minzachodu;
    czas = h * 60 + m;

    if (czas >= czasw && czas < czasz)
        cout << "dzien" << endl;
    else
        cout << "noc" << endl;

    return 0;
}
