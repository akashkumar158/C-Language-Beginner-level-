#include <stdio.h>

void main()
{
    int i;
    char a[50];

    printf("Enter the sentence: ");
    gets(a);

    /* capitalize first character if it is a lowercase letter */
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        a[0] = a[0] - 32;
    }

    /* capitalize every character that comes after a space */
    for (i = 1; a[i] != '\0'; i++)
    {
        if (a[i-1] == ' ' && a[i] >= 'a' && a[i] <= 'z') // i-1 is for space before start of the sentence
        {
            a[i] = a[i] - 32;
        }
    }

    printf("The converted sentence is: ");
    puts(a);
}
