//  Count positive,negative and zeros entered by user//
#include<stdio.h>
void main()
{
 int n,i,z=0,p=0,ne=0,num;
 printf("Enter the number of digits to write\n");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     scanf("%d",&num);
     if(num<0)
     {
         ne++;
     }
     else if(num>0)
     {
         p++;
     }
     else
     {
         z++;
     }
 }
 printf(" Negative numbers:%d\n  Positive number:%d\n  Zeros :%d",ne,p,z);
}