#include <stdio.h>

void main()
{
    int i;
    char a[100];

    printf("Enter the characters in the array: ");
    scanf("%s", a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            a[i] = a[i] - 32;  // Convert to uppercase
        }
    }

    printf("Uppercase string: %s\n", a);


}
