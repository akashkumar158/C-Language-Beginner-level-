
#include<stdio.h>
void main()
{
   int m,b,t;
   float d, g=0.28;


   printf ("enter number of members");
   scanf ("%d",&m);

   if (m>=1 && m<=5)
    {
       d= 0.10;
    printf("the discount is %f",d);

    }


    else if (m>=6 && m<=10)
    {
        d= 0.15;
        printf("the discount is %f",d);

    }

    else if (m>=11 && m<=20)
    {
       d= 0.20;
       printf("the discount is %f",d);

    }

    else if (m>=20)
    {
        d=0.30;
        printf(" the discount is %f",d);

    }



   b= m *500 * d;

   printf (" \n the basic bill along with discount is %d",b);



   t= m*500*d*g;

    printf (" \n the final bil with gst included is %d",t);









}
