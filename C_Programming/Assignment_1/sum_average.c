// Write a C program to find out  sum & average of n numbers.

#include <stdio.h>

void take_num(int *num);
int sum(int size);

int main()
{
    int size;
    printf("Enter the N numbers You have to calculate ");
    take_num(&size);
    printf("Your Entered number is %d\n", size);
    int Temp = sum(size);
    printf("Sum of the given %d number is %d\n", size, Temp);
    printf("Average of the given %d number is %d\n", size, Temp / size);
}

int sum(int size)
{
    int num, sum_total = 0;
    for (int i = 1; i <= size; i++)
    {
        take_num(&num);
        sum_total += num;
    }
    return sum_total;
}

void take_num(int *num)
{
    scanf("%d", num);
}