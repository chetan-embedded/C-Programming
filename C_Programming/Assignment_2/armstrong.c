#include <stdio.h>

void main()
{
    int num,count=0;
    int size = 0,prime = 0;
    printf("Armstrong Calculator !!\n");

    printf("Enter the Number you want to check ");
    scanf("%d",&num);
    size = num;
    prime = num;
    while(size != 0)
    {
        count++;

       size = size / 10;
       
    }

    for (int i = 0; i < count; i++)
       {
           prime = num % 2;
       }
    printf("%d",count);
    printf("%d",prime);

    
    
}