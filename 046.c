#include<stdio.h>
void main()
{
    int x,y,z;
    int i;

    x=z=0;
    y=i=1;


    while(i<=10)
    {
        z=x+y;
        printf("%d ",x );
        x=y;
        y=z;

       i++;
    }

    printf("\n\n\n");

}
