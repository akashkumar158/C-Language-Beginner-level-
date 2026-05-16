#include <stdio.h>

int main()
{
    char a[100];
    int i, sp = 0;

    printf("Enter a sentence: ");
    gets(a);




    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == ' ')
        {
            sp++;
        }
    }

    printf("Number of spaces = %d\n", sp);

    return 0;
}
