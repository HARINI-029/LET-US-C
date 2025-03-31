/******************************************************************************

Temperature of a city in Fahrenheit degrees is input through the 
keyboard. Write a program to convert this temperature into 
Centigrade degrees. 

*******************************************************************************/
#include <stdio.h>
void  main()
{
  float fahrenheit,centigrate;
  printf("Enter the fahrenheit\n");
  scanf("%f",&fahrenheit);
  centigrate=(5.0/9.0)*(fahrenheit - 32);// C=5/9*(F-32)
  printf("%f",centigrate);
  
}
