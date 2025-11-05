#include<stdio.h>
  void main()
  {
    int a,b;

    printf(" Enter value in a :");
    scanf("%d",&a);
    printf(" Enter value in b :");
    scanf("%d",&b);


    a=a+b;

    b=a-b;
    a=a-b;

    printf("\n After swappinng values are :\n\n");
    printf("\n a is %d",a);
    printf("\n b is %d\n\n\n\n\n",b);
}
