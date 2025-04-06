/* Print hours of the day with suitable suffixes */ 
#include<stdio.h>
void main()
{
    int i;
    for(i=0;i<=23;i++)
    {
        if(i==0)
        {
            printf("12 midnight\n");
        }
        else if(i<12)
        {
            printf("%d AM\n",i);
        }
        else if(i==12)
        {
           printf("Noon\n"); 
        }
        else if(i>12)
        {
            printf("%d PM\n",i);
        }
        
    }
}


