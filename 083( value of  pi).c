#include <stdio.h>
 int add()
{
  int a,b,c;
  printf("enter both the values --->");
  scanf("%d%d",&a&b);

  c=a+b;

 return c;
}

  int main()
{
    int result = add(10, 20);
    printf("Sum = %d", result);
    return 0;
}


