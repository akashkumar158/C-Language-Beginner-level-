#include<stdio.h>
void main()
{
  int u,r,T,I;
  float t=0.12;


   printf("how much unit is generated");
   scanf("%d",&u);


   if (u>=1 && u<=300)
   {
       r=5;
       printf("the rate of bill is %d",r);

    }

   else if (u>=301 && u<=500)
       {
         r=7;
       printf("the rate of bill is %d",r);

        }

   else if (u<=501  && u>=1000)
   {
     r=9;
    printf("th rate of bill is %d",r);

    }

    else if (u>=1001 && u<=2000)
    {
      r=12;
       printf("the rate of the bill is %d",r);

    }

    else if ("u>=2001")

        {
          r=14;
          printf("the rate of bill is %d",r);

        }


    T= u*r;
    printf(" \n the basic bill generated is %d",T);


    I=u*r*t;

     printf (" \n the bill generated along with tax include is %d",I);



}
