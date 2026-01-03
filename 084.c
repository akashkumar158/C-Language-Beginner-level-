#include <stdio.h>

int even_odd()
{
    int n,r;

    printf(" Enter any value :");
    scanf("%d",&n);

    r=n%2;

    return r;
}

int main()
{

    int k;

    k=even_odd();

    if(k==0)
        printf(" EVEN number");
    else
        printf(" ODD number");

    return 0;
}
