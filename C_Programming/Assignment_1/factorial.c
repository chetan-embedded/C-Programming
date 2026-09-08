// Write a C program to calculate the factorial of given number

#include <stdio.h>
int factorial(int fact);
void take_number(int *num);

int main()
{
    int num;

    printf("Enter a number you want factorial of ");
    take_number(&num);
    printf("Factorial of %d is %d", num, factorial(num));
}

int factorial(int fact)
{
    int total = 1;
    if (fact == 0 || fact == 1)
    {
        return 1;
    }

    for (int i = 1; i <= fact; i++)
    {
        total *= i;
    }
    return total;
}

void take_number(int *num)
{
    scanf("%d", num);
}
