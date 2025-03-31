/***
 * The distance between two cities (in kilometers) is input through the 
keyboard. Write a program to convert and print this distance in meters, 
feet, inches and centimeters. 
*******/
#include<stdio.h>
void main()
{
    float dis,meter,feet,inches,cm;
    printf("Enter the distance in (KM)\n");
    scanf("%f",&dis);
    meter=dis*1000;
    cm=meter*100;
    inches=cm*0.3937;
    feet=inches/12;
    printf("Meter:%.2f\nCM:%.2f\nINCHES:%.2f\nFEET%.2f\n",meter,cm,inches,feet);
}
