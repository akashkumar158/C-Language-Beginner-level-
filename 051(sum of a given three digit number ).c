#include<stdio.h>
void main()
{

 int n,r,s=0;
 printf("ENTER THE THREE DIGIT NUMBER");
 scanf("%d",&n);

 do
 {
     r=n%10;
     s=s+r;
     n=n/10;
 }
  while(n>0);
  printf("THE SUM OF THE GIVEN THREE DIGIT NUMBER IS %d",s);
 }
