#include<stdio.h>
#include<string.h>

void main()
{
    char a[100];
    int i, length;

    printf("enter the string");
    gets(a);

    length=strlen(a);

    printf("the reversed string is");

    for(i=length-1; i>=0; i--)
    {
     printf("%c",a[i]);
    }
    printf("\n");
}
