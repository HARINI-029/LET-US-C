/********
 * Two numbers are entered through the keyboard. Write a program to 
find the value of one number raised to the power of another. 
************/
#include<stdio.h>
void main()
{
    int a,b,i=1,ans=1;
    printf("Enter the number");
    scanf("%d %d",&a,&b);
    while(i<=b)
    {
       ans=ans*a;
       i++;
    }
    printf("%d",ans);
}