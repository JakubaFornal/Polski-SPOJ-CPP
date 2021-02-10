#include <stdio.h>

int main()
{
    long int n;
    scanf("%ld", &n);
    while (n--)
    {
        long int k, l;
        scanf("%ld %ld", &l, &k);
        if ((l | k) == l)
            printf("N");
        else
            printf("P");
        if (n > 0)
            printf("\n");
    }
    return 0;
}