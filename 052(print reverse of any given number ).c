#include<stdio.h>
void main()
{
 int n,r,s=0;
 printf ("ENTER THE NUMBER");
 scanf("%d",&n);
do
{
  r=n%10;
  s=s*10+r;
  n=n/10;
}
 while(n>0);
 printf("THE RVERSE ORDER OF GIVEN NUMBER IS -----> %d",s);
}
