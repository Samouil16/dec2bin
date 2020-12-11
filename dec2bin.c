#include <stdio.h>

int main()
{
    int a;
    scanf ("%d", &a);

    if(a < 0 || a > 31)
    {
        printf("Wrong Input");
        return 1;
    }

    int b[32], i = 0;

    if (a == 0)
    {
        printf("0");
        return 0;
    }
    while(a != 0)
    {
        b[i] = a % 2;
        a /= 2;
        i++;
    }
    for(int j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
    return 0;
}
