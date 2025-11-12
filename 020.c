#include<stdio.h>
 void main()
{
    int   yrs;

  printf("enter the years ");
  scanf ("%d",&yrs);



    if ( yrs%4 ==0)
    {
        if(yrs%100==0)
        {
            if(yrs%400==0)
              printf (" leap year %d ", yrs );
            else
                printf(" Not Leap year ");
        }
        else
        {
            printf(" Leap Year ");
        }
    }
    else
    {
        printf("\n Not Leap Year ");
    }



}
