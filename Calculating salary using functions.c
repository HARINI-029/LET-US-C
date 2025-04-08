/******************************************************************************

   3. Write a modular program to calculate the net salary of an
   employee after tax deduction. The salary includes: Basic Salary 
   and Tax Rate (in percentage).
Formula:
Tax Amount = (Basic Salary × Tax Rate)/100
Net Salary = Basic Salary - Tax Amount


*******************************************************************************/
#include<stdio.h>
void input(float *basic_salary, float *tax_rate);
float calculate_tax(float basic_salary, float tax_rate);
float calculate_net_salary(float basic_salary, float tax);
void output(float amt,float net_salary);
int main()
{
float salary,tax;
input(&salary,&tax);
float tax_amt=calculate_tax(salary,tax);
float net_salary=calculate_net_salary(salary,tax);
output(tax_amt,net_salary);
}
void input(float *basic_salary, float *tax_rate)
{
    printf("Enter salary,tax\n");
    scanf("%f %f",basic_salary,tax_rate);
    
}
float calculate_tax(float basic_salary, float tax_rate)
{
    return (basic_salary*tax_rate)/100;
    
}
float calculate_net_salary(float basic_salary, float tax)
{
    return basic_salary*tax;
}
void output(float amt,float net_salary)
{
    printf("%f\n %f",amt,net_salary);
}

