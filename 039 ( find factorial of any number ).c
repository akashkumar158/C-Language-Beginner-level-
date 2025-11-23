#include<stdio.h>
void main()
{
    int i ,s=1;

    printf("enter the number to find its factorial");
    scanf  ("%d",&i);

     while (i>=1)
    {
        s = s * i;

        i--;
    }
     printf(" the factorial of the given number is %d",s);
}
