#include<stdio.h>
void main()
{
    int ch,un,bill;

    printf ("enter the number");
    scanf("%d",&un);

    printf("\n Press 1 for Domestic and 2 for Commericial ");
    scanf("%d",&ch);
    if (ch == 1)
    {
       printf("\n ************* Domestic Bill **********");
       if(un<=300)
        bill=un*5;
       else if(un<=500)
        bill=un*7;
       else if(un<=1000)
        bill=un*8;
       else if (un<=200)
        bill=un*10;

        printf("\n the overall domestic  BILL is %d",bill);
    }

     else if (ch == 2 )
     {
         printf("\n*************  comercial bill ************");
         if (un<=300)
           bill=un*7;
         else if (un<=500)
            bill =un*11;
         else if (un<=1000)
            bill = un * 14;
        else if ( un<=2000)
            bill =un * 16;

        printf("\n the overall  commercial BILL is %d", bill);
     }


}

