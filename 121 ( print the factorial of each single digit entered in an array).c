#include <stdio.h>

int main()
{
    int a[5], i, j,s=1;

    printf("Enter 5 values:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i< 5; i++)
    {
        for(j = 1; j <= a[i]; j++)
        {
            s = s * j;
        }

        printf("Factorial of %d = %d\n", a[i], s);
    }

    return 0;
}
