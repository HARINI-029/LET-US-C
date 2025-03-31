/******************************************************************************

Write a program to find the factorial value of any number entered 
through the keyboard. 

*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>

int main()
{
   int i=1,fact=1,num;
   printf("Enter a number\n");
   scanf("%d",&num);
 
   while(i<=num)
   {
        
  
   {
       fact=fact*i;
       i++;
   }
   }
   printf("%d",fact);
}
