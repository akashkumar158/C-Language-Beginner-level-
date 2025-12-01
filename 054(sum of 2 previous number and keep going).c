#include<stdio.h>
void main()
{
    int i,x,y,z;
    x=z=0;
    y=i=1;

    do
    {
        z=x+y;
        printf("%d ",x);
        x=y;
        y=z;

        i++;

    }
        while(i<=10);
        printf("\n\n\n");
}
