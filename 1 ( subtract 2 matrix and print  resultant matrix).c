#include<stdio.h>
int main()
{
 int m,i,j;

 printf("enter the size for both square matrices");
 scanf("%d",&m);
 int a[m][m], b[m][m];
printf(" enter non zero elements in the matrix");
 for(i=0; i<= m-1; i++)
 {
  for(j=0; j<=m-1; j++)
  {
     scanf("%d", &a[i][j]);
  }
 }

  for(i=0; i<= m-1; i++)
 {
  for(j=0; j<=m-1; j++)
  {
     scanf("%d", &b[i][j]);
  }
 }


  for(i=0; i<= m-1; i++)
 {
  for(j=0; j<=m-1; j++)
  {
     a[i][j]= a[i][j] - b[i][j];
  }
 }

  for(i=0; i<= m-1; i++)
 {
  for(j=0; j<=m-1; j++)
  {
     printf("%d",a[i][j]);
  }
  printf("\n");
 }

return 0;
}
