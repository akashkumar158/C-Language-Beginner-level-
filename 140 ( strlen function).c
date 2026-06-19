#include <stdio.h>
#include <string.h>

int main()
{
    char a[100];
    int i;

    printf("Enter characters in the string: ");
    fgets(a, sizeof(a), stdin);



    i = strlen(a);
    printf("The total length of string is ---> %d\n", i);

    return 0;
}
