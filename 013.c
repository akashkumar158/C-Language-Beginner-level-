#include<stdio.h>
void main ()
{
    int a,t;

     printf("enter the age of the person");
     scanf("%d",&a);


    if (a>=18)

        printf("the person is eligible to vote");


    else
    {
        t= (18-a);

       printf("the person will be eligible to vote after: %d years ",t);


    }

}
