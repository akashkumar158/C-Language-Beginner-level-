#include<stdio.h>
void main()
{
    int n,r, s=0;

    printf("ENTER THE VALUE ");
    scanf("%d", &n);

     while(n>0)
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }
    printf ("THE Sum of three digit's number is : %d", s);
}


