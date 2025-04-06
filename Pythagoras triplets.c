//Program to find all possible pythagoras triplet less than or equal to 30//
#include<stdio.h>
#include<math.h>
void main()
{
    int i,j,k,a;
    for(i=1;i<=30;i++)
    {
        for(j=1;j<=30;j++)
        {
            for(k=1;k<=30;k++)
            {
               if( pow(i,2)==pow(j,2)+pow(k,2))
               {
                   printf("%d %d %d\n",i,j,k);
               }
              
            }
        }
    }
}