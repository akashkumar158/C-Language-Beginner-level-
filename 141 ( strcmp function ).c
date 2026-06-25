#include<stdio.h>
#include<string.h>

void main()
{
 char a[100],b[100];
 int i,k=0;

 printf("enter the first string");
 gets(a);

 printf("enter the second string");
 gets(b);

 k=strcmp(a,b);

 printf(" the value of k is %d",k);

 if(k>0)
 {
  printf(" \n first string is greater");
 }

 else
 {
  printf("\n  second string is greater");
 }
}
