#include<stdio.h>

int main()
{
    int m,i,j,sum=0;

    printf("Enter size of square matrix: ");
    scanf("%d",&m);

    int a[m][m];

    printf("Enter matrix elements:\n");

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0 || i==m-1 || j==0 || j==m-1)
            {
                sum = sum + a[i][j];
            }
        }
    }

    printf("Sum of peripheral elements = %d",sum);

    return 0;
}
