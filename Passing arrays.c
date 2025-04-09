//Passing arrays//
#include<stdio.h>
int add(int a[]);
int main()
{
    int b[5]={1,2,3,4,5};
    add(b);
    
}
int add(int a[])
{
    int sum;
    for(int i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}