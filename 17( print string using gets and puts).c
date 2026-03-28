#include<stdio.h>
#include<string.h>
int main()
{
 int i=0;
 char arr[] = {"learn c with me \0"};
 gets(arr);
 puts(arr); //only applicable for strings to print output
 return 0;
}
