#include<stdio.h>
void main()
{
  int i=1,s=0;

   while(i<=9)
   {
       s=s+(i*i);
       i=i+2;
   }
    printf("the sum of the numbers is= %d",s);
}
