#include<stdio.h>
  void main()
  {
    int a,b,t;

    printf(" Enter value in a :");
    scanf("%d",&a);
    printf(" Enter value in b :");
    scanf("%d",&b);


    t=a;
    a=b;
    b=t;

    printf("\n After swappinng values are :\n\n");
    printf("\n a is %d",a);
    printf("\n b is %d\n\n\n\n\n",b);
}
