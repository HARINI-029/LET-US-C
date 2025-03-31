/***
 * Ramesh’s basic salary is input through the keyboard. His dearness 
allowance is 40% of basic salary, and house rent allowance is 20% of 
basic salary. Write a program to calculate his gross salary. 
**/
#include<stdio.h>
void main()
{
    float salary,dr,hr,gs;
    printf("Enter the basic salary\n");
    scanf("%f",&salary);
    dr=0.4*salary;
    hr=0.2*salary;
    gs=dr+hr+salary;
    printf("DR:%.2f\nHR:%.2f\nGS:%.2f\n",dr,hr,gs);
    
}