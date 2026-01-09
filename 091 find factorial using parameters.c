#include<stdio.h>

void input();
void fact();

void main()
{
 input();
}

void input()
{
  int i ,s=1;

    printf("enter the number to find its factorial");
    scanf  ("%d",&i);

     while (i>=1)
    {
        s = s * i;
        i--;
    }
     fact(s,i);
}

void fact(int s, int i)
{
    printf("%d",s);
}
