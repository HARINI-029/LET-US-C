/******************************************************************************
Program to calculate area and cost

*******************************************************************************/

#include <stdio.h>

void input(float *length, float *width, float *cost_per_unit);
float calculate_area(float length, float width);
float calculate_total_cost(float area, float cost_per_unit);
void output(float area, float total_cost);

int main()
{
   float l, w, cost;
  
   input(&l, &w, &cost);
   float area = calculate_area(l, w);
   float total = calculate_total_cost(area, cost);
   output(area, total);
   return 0; 

void input(float *length, float *width, float *cost_per_unit)
{
    printf("Enter the length of the floor: ");
    scanf("%f", length);
    printf("Enter the width of the floor: ");
    scanf("%f", width);
    printf("Enter the cost per square unit: ");
    scanf("%f", cost_per_unit);
}

float calculate_area(float length, float width)
{
    return length * width;
}

float calculate_total_cost(float area, float cost_per_unit)
{
    return area * cost_per_unit;
}

void output(float area, float total_cost) 
{
    printf("\nArea of the rectangular floor: %.2f square units\n", area);
    printf("Total tiling cost: ₹%.2f\n", total_cost);
}
