#include<stdio.h>
void main()
{
  int i=1,s=0;
  while(i<=5)
  {
    s= s+(i*i);
    i++;
  }
   printf ("the multiplied sum of the series is= %d",s);
}
