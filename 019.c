#include<stdio.h>
 void main()
 {
   int n,m,mb;
   float d,bg;

    printf (" enter the number of members");
    scanf ("%d",&m);


   printf("enter  number");
   scanf ("%d",&n);

   if (n == 2)
   {
      printf ("2D movie %d",n);

      if (m<=5)
         d = 0.10;

      else if (m<=10)
       d = 0.20;
      else if (m<=20)
        d =   0.30;

      else if (m<=30)
        d = 0.40 ;

      printf ("the discount according to the members are %f",d);

        mb= m*d*500;
        printf("\n the basic movie bill is %d",mb);

        bg= m*d*500*0.28;
        printf("\n the movie bill with included gst is %f", bg);

    }



      else if (n==3)
       {
           printf("3D movie %d",n);


           if (m<=5)
         d = 0.10;

      else if (m<=10)
       d = 0.20;
      else if (m<=20)
        d =   0.30;

      else if (m<=30)
        d = 0.40 ;

      printf ("the discount according to the members are %f",d);

       mb= m*d*1000;
        printf("\n the basic movie bill is %d",mb);

                bg= m*d*1000*0.28;
                printf("\n the movie bill with included gst is %f", bg);



       }
 }
