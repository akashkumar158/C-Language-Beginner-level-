#include<stdio.h>
void main()
{
    int p,c,m,t,av;

    printf(" Enter marks of Physics :");
    scanf("%d",&p);
    printf(" Enter marks of Physics
           \

            :");
    scanf("%d",&p);
    printf(" Enter marks of Physics :");
    scanf("%d",&p);



    t= p+c+m;
    printf(" \n the total marks of all the subjects combined is: %d",t);


    av= t/3;

    printf("\n the average marks of all three subjects is %d",av);



    if (av>=90)
        printf("\n A+");

    else if (av>=75 && av<=90)
          printf(" \n A");

    else if (av>=60 && av<=75)

          printf(" \n B+");

    else if (av>=50 && av<=60)

        printf(" \n B");

     else if (av>=40 && av<=50)

        printf("\n c");

     else if (av<=40)
         printf (" \n failed");

}
