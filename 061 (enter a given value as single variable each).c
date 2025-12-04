#include<stdio.h>
void main()
{
    int i,x,y,z;
    x=z=0;
    y=i=1;


for(i=1;i<=10;i++)
 {
  z=x+y;
  printf("%d",x);
  x=y;
  y=z;
 }
 printf("\n\n\n");
}
