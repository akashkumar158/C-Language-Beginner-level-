#include <stdio.h>
void main()
{
     int i= 1, s= 0;

     while (i<=5)
    {
      if (i%2 !=0)
       {
         s = s+ (i*i);
       }

      else if (i%2 ==0)
       {
            s = s+ (i*i*i);
        }


      i++;
    }

      printf ("the overall sum is %d", s);
}
