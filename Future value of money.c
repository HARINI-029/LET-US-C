/******************************************************************************

When interest compounds q times per year at an annual rate of r % 
for n years, the principal p compounds to an amount a as per the 
following formula 
a = p ( 1 + r / q ) nq 
Write a program to read 10 sets of p, r, n & q and calculate the 
corresponding a s. 
*******************************************************************************/
#include <stdio.h>
#include<math.h>

void main()
{
    float p,q,r,t,a;
    int i;
    
    for(i=1;i<=10;i++)
    {
        printf("Enter the principle amt,rate of interest,time period,compounding period\n");
        scanf("%f %f %f %f\n",&p,&q,&r,&t);
        a =p *pow((1+ r/q),t*q);
        printf("%.2f",a);
    }


}
