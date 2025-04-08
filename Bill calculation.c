/******************************************************************************
Write a modular program to calculate a mobile user's monthly bill. The bill 
includes fixed monthly charge, cost per call and number of calls made.
Formula: Total Bill=Fixed Charge + (Number of Calls × Cost per Call)
*******************************************************************************/
#include<stdio.h>
void input(float *fixed_charge, int *num_calls, float *cost_per_call);
float calculate_bill(float fixed_charge, int num_calls, float cost_per_call);
void output(float total_bill);
int main()
{
    float charge,cost;int call;
    input(&charge,&call,&cost);
    float bill=calculate_bill(charge,call,cost);
    output(bill);
}

void input(float *fixed_charge, int *num_calls, float *cost_per_call)
{
    printf("Enter the fixed charge,number of calls and cost per call");
    scanf("%f %d %f",fixed_charge,num_calls,cost_per_call);
    
}
float calculate_bill(float fixed_charge, int num_calls, float cost_per_call)
{
    return fixed_charge+(num_calls* cost_per_call);
}
void output(float total_bill)
{
    printf("%f",total_bill);
}

