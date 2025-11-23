#include <stdio.h>
void main()
{
  int i,s=0;
  i=1;
  while(i<=9)
  {
    s= s+i;
    i= i+2;
  }
   printf("the sum of the series is = %d", s);
}
