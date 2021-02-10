#include <iostream>
#include <cmath>

using namespace std;

long a, b;
char z;

int main()
{
    while (cin >> z >> a >> b)
    {
        switch (z)
        {
        case '+':
        {
            cout << a + b << endl;
        }
        break;
        case '-':
        {
            cout << a - b << endl;
        }
        break;
        case '*':
        {
            cout << a * b << endl;
        }
        break;
        case '/':
        {
            cout << a / b << endl;
        }
        break;
        case '%':
        {
            cout << a % b << endl;
        }
        break;
        }
    }
    return 0;
}