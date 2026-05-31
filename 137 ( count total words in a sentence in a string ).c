#include <stdio.h>

int main()
{
    char a[100];
    int i, sp = 0, w=0;

    printf("Enter a sentence: ");
    gets(a);




    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
            {
              w++;
            }
        else if (a[i] >= 'A' && a[i] <= 'Z')
            {
              w++;
            }
        else if (a[i] == ' ')
        {
            sp++;
        }
    }

    printf("Number of words= %d\n",w);
    printf("number of spaces= %d\n",sp);

    return 0;
}
