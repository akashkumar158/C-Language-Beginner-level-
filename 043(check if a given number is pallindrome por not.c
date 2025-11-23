#include<stdio.h>
void main()
{
    int n,r,s=0;
    int t;

    printf(" ENTER ANY THREE DIGIT NUMBER -------- ");
    scanf ("%d",&n);

    t=n;


    while (n>0)

    {
        r=n%10;
        s=s*10+r;
        n=n/10;

    }

     if (s==t )
        printf ("\n\n\n ITS A PALLINDROME NUMBER\n\n\n");

    else
        printf ("\n\n\n ITS NOT A PALLINDROME NUMBER\n\n\n");

}
