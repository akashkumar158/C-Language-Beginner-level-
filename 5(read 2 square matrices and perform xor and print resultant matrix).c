     #include<stdio.h>
int main()
{
 int i,j,n;

 printf("enter the size of the matrix");
 scanf("%d",&n);

 int a[n][n], b[n][n], c[n][n];
 for(i=0; i<=n-1; i++)
 {
  for(j=0; j<=n-1; j++)
  {
   scanf("%d",&a[i][j]);
  }
 }

for(i=0;i<=n-1;i++)
 {
  for(j=0;j<=n-1;j++)
  {
   scanf("%d",&b[i][j]);
  }
 }

for(i=0; i<=n-1; i++)
 {
  for(j=0; j<=n-1; j++)
  {
   if(a[i][j]!=0 && a[i][j]!=1)
   {
    return 0;
   }
  }
 }


 for(i=0; i<=n-1; i++)
 {
  for(j=0; j<=n-1; j++)
  {
   if(b[i][j]!=0 && b[i][j]!=1)
   {
    return 0;
   }
  }
 }


 for(i=0; i<=n-1; i++)
 {
  for(j=0; j<=n-1; j++)
  {
   if(a[i][j]==b[i][j])
   {
    c[i][j]=0;
   }
   else
   {
    c[i][j]=1;
   }
  }
 }


  for(i=0; i<=n-1; i++)
 {
  for(j=0; j<=n-1; j++)
  {
    printf("%d",c[i][j]);
  }
 }
printf("\n");


return 0;
}
