#include<stdio.h>
int main()
{
int m,n,i,j,t=0;

printf("enter the size for both square matrices");
scanf("%d",&m);
scanf("%d",&n);

int a[m][n], b[n];

for(i=0; i<= m-1; i++)
 {
  for(j=0; j<= n-1; j++)
  {
     scanf("%d", &a[i][j]);
  }
 }


 for(i=0; i<= m-1; i++)
 {
  for(j=0; j<= n-1; j++)
  {
     scanf("%d",&b[j]);
  }
 }

 for(i=0; i<= m-1; i++)
 {
  for(j=0; j<= n-1; j++)
  {
   if(a[i][j]!=b[j])
   {
    break;
   }
   else
   {
     t=t+1;
   }
  }
 }

 if(t==n)
 {
 printf("name found");
 }

 else
 {
printf("name not found");
 }
return 0;
}
