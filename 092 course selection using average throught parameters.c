#include<stdio.h>
void input();
void get_info();
void courses();

void main()
{
 input();
}

void input()
{
 int f,r,a,p,c,ch,m,avg;


 printf("enter the age of the student");
 scanf("%d",&a);

 printf("enter the roll no. of the student");
 scanf("%d",&r);

 printf("enter marks scored by student in physics out of 50------>");
 scanf("%d",&p);

 printf("enter the marks scored by student in chemistry out of 50-----> ");
 scanf("%d",&c);

 printf("enter the marks scored by the student in maths out of 50-----> ");
 scanf("%d",&m);

 avg = p+c+m %3;
 printf("the average marks scored by the student is %d",avg);


 if(avg>=90)
 {
 printf("\n the student is eligible for BCA, BTECH, BSC.IT");
 printf("\n  press 1 for BCA");
 printf("\n press 2 for BTECH");
 printf("\n press 3 for BSC.IT");
 scanf("%d",&ch);

   if (ch==1)
   {
    printf("\n 75000 per semester");
    printf("\n total semesters 6");
   }

   else if (ch==2)
   {
    printf("\n 80000 per smester");
    printf("\n total semesters 8");
   }

   else if(ch==3)
   {
    printf("\n 50000 per semester");
    printf("\n total semesters 6");
   }

   else
    {
     printf("\n Invalid choice\n");
    }
     get_info(ch);
 }

  else if(avg == (70<=90) )
 {
   printf("\n the student is eligible only for BCA, BSC");
   printf("\n  press 1 for BCA");
   printf("\n press 2 for BSC.IT");
   scanf("%d",&ch);

   if (ch==1)
   {
    printf("\n 75000 per semester");
    printf("\n total semesters-------> 6");
   }


   else if(ch==2)
   {
    printf("50000 per semester");
    printf("total semesters-----> 6");
   }

   else
    {
     printf("\n Invalid choice\n");
    }
     get_info(ch);
 }

 else
 {
  printf("\n the student is only eligible for BSC");
  printf("\n press 3 for BSC.IT");
  scanf("%d",&ch);

   if(ch==3)
   {
    printf("\n 50000 per semester");
    printf("\n total semesters------> 6");
   }

   get_info(ch);
 }
}

void get_info(ch)
{
    int s;

    printf("\n\nSelect semester for payment: ");
    scanf("%d", &s);

    if (s == 1)
    {
     printf("\n No discount");
    }

    else if (s == 2)
    {
     printf("\n 10 percent discount");
    }

    else if (s == 4)
    {
     printf("\n 15 percent  discount");
    }

    else
    {
     printf("\n 25 percent  discount for full year");
    }
}



