
#include<stdio.h>
void main()
{
    int i;
    char a[100], b[100];

    printf("Enter the string: ");
    scanf("%s", a);

    // Copy string a to string b without library function
    for (i = 0; a[i] != '\0'; i++)
    {
        b[i] = a[i];   // Copy each character one by one
    }
    b[i]='\0'; // Add null terminator at the end

    printf("Original string : %s\n", a);
    printf("Copied string   : %s\n", b);
}
