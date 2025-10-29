#include<stdio.h>
  void main()
  {
    int u;
    float  tax,b,fb;

     printf("enter units");
     scanf("%d",&u);

      b= u*5;

      tax= b*12/100;

      printf("\n Basic Bill is : %f",b);
      printf("\n Tax : %f",tax);


      fb=b+tax;
      printf("\n\n The total bill is = %f",fb);



  }
