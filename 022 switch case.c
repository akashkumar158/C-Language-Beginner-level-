#include<stdio.h>
void main()
{
   int a,b,c,ch;

   printf (" enter value in a   :   ");
   scanf ("%d",&a);

   printf (" enter value in b   :   ");
   scanf ("%d",&b);




   printf ("\n press 1 for addition");
   printf ("\n press 2 for subtraction");
   printf ("\n press 3 for multiplication");
   printf ("\n press 4 for division");
   scanf("%d",&ch);

    printf("\n\n\n");


   switch(ch)
   {
      case 1:
      {
          c=a+b;
          printf(" sum is= %d ", c );
          break;
      }

      case 2:
            c= a-b;
            printf(" subtraction value is %d", c);
      break;


      case 3:
           c= a*b;
           printf ("multiplication value is= %d", c);
      break;


      case 4:
           c= a/b;
           printf ("the division value is= %d  ", c);
      break;


    default:
             printf("wrong input");

   }


   printf("\n\n\n\n");
}
