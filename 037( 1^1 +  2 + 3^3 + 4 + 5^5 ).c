#include<stdio.h>
void main()
{
   int i=1,s=0;

   while(i<=5)
   {
        if(i%2!=0)
            s=s+i*i;

        else
           s=s+i;



        i++;

   }


    printf ("\nthe overall sum is %d\n\n\n",s);

}
