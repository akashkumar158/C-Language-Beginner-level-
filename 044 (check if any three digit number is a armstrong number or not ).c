#include<STDIO.h>
void main()
{
    int i,r, a, b,s=0,t;

    printf ("ENTER THE THREE DIGIT NUMBER ---------> ");
    scanf   ("%d",&i);

    t=i;

     while (i>0)
     {
      r=i%10;
      s=s+(r*r*r);
      i=i/10;
     }


     printf(" \n i is %d  \n and \n s is %d ",i,s);

     if (s==t)
        printf (" \n it is an armstrong number");

    else
        printf (" \n it is not an armstrong number");


}
