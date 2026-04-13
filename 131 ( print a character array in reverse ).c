#include <stdio.h>

int main()
{
    int i = 0, length = 0;
    char a[i];

    printf("Enter characters in the array:\n");
    scanf("%s", a);

    // Calculate length
    while (a[i] != '\0')
    {
        length++;
        i++;
    }

    // Print reverse
    for (i = length - 1; i >= 0; i--)
    {
        printf("%c", a[i]);
    }

    return 0;
}
