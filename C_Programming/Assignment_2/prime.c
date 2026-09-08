// Implement a C program to check given number is prime or not.( eg. 1, 2, 3, 5. 7, 11, 13, 17 ... )
#include <stdio.h>
int is_prime(int num);
void take_num(int *number_to_check);

int main()
{
    int num;
    take_num(&num);
    if (is_prime(num) == 1)
    {
        printf("\n%d is a Prime Number", num);
    }

    else
        printf("\n%d is Not a Prime Number", num);
}

void take_num(int *number_to_check)
{
    printf("Enter a number  ");
    scanf("%d", number_to_check);
}
int is_prime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int i = 2; i < num; i++)
    {

        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
