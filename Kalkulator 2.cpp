#include <iostream>
#include <cmath>

using namespace std;

long a, b;
char x;

int main()
{
    int liczby[10];
    while (cin >> x >> a >> b)
    {
        switch (x)
        {
        case '+':
        {
            cout << liczby[a] + liczby[b] << endl;
        }
        break;
        case '-':
        {
            cout << liczby[a] - liczby[b] << endl;
        }
        break;
        case '*':
        {
            cout << liczby[a] * liczby[b] << endl;
        }
        break;
        case '/':
        {
            cout << liczby[a] / liczby[b] << endl;
        }
        break;
        case '%':
        {
            cout << liczby[a] % liczby[b] << endl;
        }
        break;
        default:
            liczby[a] = b;
            break;
        }
    }
    return 0;
}
