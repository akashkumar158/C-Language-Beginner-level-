#include<stdio.h>
void main()
{
     int ch,a;

  printf ("enter the value of the number");
  scanf ("%d",&a  );


  printf (" press 1 to check whether the number is even or odd  ");
  printf (" press 2 to check whether the number is positive or negative ");
  scanf ("%d", &ch);


  switch(ch)
  {
     case 1:

              if( a % 2 == 0)
                printf ("the given number is an even number %d", a);

                else
                    printf ("the given number is an ODD number %d", a);

          break ;


     case 2:

        if(a>0)
                printf (" the given number is positive %d ",a);
        else

                printf (" the given number is negative %d ", a);

      break ;


     default:

          printf ("wrong input ");


  }
}
