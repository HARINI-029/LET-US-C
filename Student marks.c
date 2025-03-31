/****
 * If the marks obtained by a student in five different subjects are input 
through the keyboard, write a program to find out the aggregate marks 
and percentage marks obtained by the student. Assume that the 
maximum marks that can be obtained by a student in each subject is 
100.
***/
#include<stdio.h>
void main()
{
    float m1,m2,m3,m4,m5,total,perc;
    printf("Enter 5 subject marks(out of 100)\n");
    scanf("%f %f %f %f %f",&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    perc=((total)/500)*100;
    printf("AGGRGATE:%f\nPercentage:%f",total,perc);
}
