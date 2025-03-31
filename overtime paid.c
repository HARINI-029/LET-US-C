/***
 * 
 Write a program to calculate overtime pay of 10 employees. Overtime is 
paid at the rate of Rs. 120.00 per hour for every hour worked above 40 
hours. Assume that employees do not work for fractional part of an 
hour.
***/
#include<stdio.h>
void main()
{
    int i=1,hour,paid=0;
    while(i<=10)
    {
       printf("Enter the number of hours worked\n");
       scanf("%d",&hour);
       if(hour>40)
       {
       paid=(hour- 40)* 120 ;
       }
       else
       {
           paid=0;
       }
       printf("%d\n",paid);
       
       
       
    }
}
