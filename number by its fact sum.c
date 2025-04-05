//To find 1/1!+2/2!+3/3! upto 7 terms//
#include<stdio.h>
void main()
{
    float fact=1,i,sum=0;
    for(i=1;i<=7;i++)
    {
        fact=fact*i;
        sum=sum+i/fact;
    }
    printf("%f\n",fact);
    printf("%f",sum);
}