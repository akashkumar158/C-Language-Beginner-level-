#include<stdio.h>
 void main()
{
   int a,b,t;

    printf("enter value of A");
    scanf ("%d",&a);

    printf("enter value of A");
    scanf ("%d",&b);

    if (a>b)
    {
        t=a+b;
        printf("A is greater than B and the sum is : %d ",t);
    }
    else
    {
        t=a*b;
        printf("b is greater than a and the product is : %d ",t);
    }
}
