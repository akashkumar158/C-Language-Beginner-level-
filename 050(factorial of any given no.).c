#include<stdio.h>
void main()
{
   int i,s=1;

   printf("ENTER THE NUMBER");
   scanf("%d",&i);

   do
{
    s=s*i;
    i--;
}
  while(i>=1);
  printf("THE FACTORIAL OF GIVEN NO. IS %d",s);
}
