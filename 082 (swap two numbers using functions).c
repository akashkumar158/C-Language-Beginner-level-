#include<stdio.h>

void swap(); //function declaration

void main()
{
    swap();  //function calling
}

void swap() //function body
{
    int a,b;
    printf("enter value of A");
    printf(" enter value of B");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;

    printf("the swapped values are");
    printf("\n the value  of A= %d",a);
    printf("\n the value of B= %d",b);




}
