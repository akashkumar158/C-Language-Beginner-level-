#include<stdio.h>
void main()
{
 int n,r,a=0,b=0,c=0;
 printf("ENTER THE NUMBER");
 scanf("%d",&n);
 do
 {
     r= n%10;
     n=n/10;

     if (c == 0)
         c=r;

     else if(b==0)
        b=r;

     else if(a == 0)
                a=r;
 }
    while (n>0);
    printf (" \n a= %d",a );
    printf (" \n b= %d",b );
    printf (" \n c= %d",c );
}
