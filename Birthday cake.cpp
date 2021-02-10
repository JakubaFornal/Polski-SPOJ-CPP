#include <iostream>

using namespace std;

long long ciecia(const long long *x)
{
    long long kawalki = 1;
    int temp = 1;
    while (kawalki < *x)
    {
        kawalki += temp;
        temp++;
    }
    return temp - 1;
}

int main()
{
    long long x;
    while (cin >> x)
    {
        cout << ciecia(&x) << endl;
    }
    return 0;
}
