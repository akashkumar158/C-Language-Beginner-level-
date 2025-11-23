#include<stdio.h>
void main()
{
    int x=0,y=1,s;
    while(y>0 && y<=10)
    {
     s=x+y;
     printf("\n\n THE VALUE OF X --------|> %d",x);
     printf("\n\n THE VALUE OF Y --------|> %d",y);
     printf("\n\n THE SUM OF X AND Y ----|> %d",s);
        x=y;
        y=s;
    }
}
