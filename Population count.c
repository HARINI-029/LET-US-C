/******************************************************************************

Population of a town today is 100000. The population has increased 
steadily at the rate of 10% per year for last 10 years. Write a 
program to determine the population at the end of each year in the 
last decade. 
//Population_Year_n = Initial_Population * (1 + Growth_Rate)^n

*******************************************************************************/
#include <stdio.h>
#include<math.h>

void main()
{
   double p=100000,r=0.1,t,py;
   for( t=0;t<=10;t++)
   {
    py=p/(pow(1+r,t));
       printf("Population in the year %f is %f\n",t,py);
   }
   
}