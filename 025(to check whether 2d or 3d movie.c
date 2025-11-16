#include <stdio.h>
void main()
{
    int m,b,gst,fb,ch;

    printf("enter the number of members who are going to watch the movie ");
    scanf  ("%d ",&m);

    printf ("press 1 to check for 2d movie OR press 2 to check for 3d movie");
    scanf ("%d", &ch);

    switch(ch)
    {
       case 1:
           {
            printf  ("\n ************ 2D MOVIE *************");

            if ( m>=1 && m<=10)
                b= m*500;

            else if ( m>=11 && m<=20)
                b= m*1000;

            else if ( m>=20)
                b= m* 1500;

            else  b= m* 2000;

            break ;
           }

        case 2:
            {
            printf ("\n ************* 3D MOVIE **************");

            if ( b>=1 && b<=10)
                b= m*500;

            else if ( b>=11 && b<=20)
                b= m*1000;

            else if ( b>=20)
                b= m* 1500;


            else  b= m* 2000;

            break;
            }


    default :
            printf (" wrong input");

    }

       printf ("\n THE BASIC BILL IS %d",b);


       gst = 28/100;
       fb   =  b + gst;

       printf (" \n THE GST WILL BE %d", gst);
       printf ("\n  THE FINAL BILL IS %d", fb );
}
