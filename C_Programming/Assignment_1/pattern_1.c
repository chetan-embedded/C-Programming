/*Print the Below Pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5*/

#include <stdio.h>
void first_pattern(int size);
void second_pattern(int size);
void third_pattern(int size);

int main()
{
    int count_int;
    printf("Enter the Number count ");
    scanf("%d", &count_int);
    printf("First pattern is as follows\n");
    first_pattern(count_int);
    printf("\n");
    printf("Second pattern is as follows\n");
    second_pattern(count_int);
    printf("\n");
    printf("Third pattern is as follows\n");
    third_pattern(count_int);
}
void first_pattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
}

void second_pattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            printf("  ");
        }

        for (int k = 0; k < i; k++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
}

void third_pattern(int size)
{
    for (int i = 1; i <= size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            printf("  ");
        }

        for (int k = 1; k < i+i; k++)
        {
            printf("%d ", i);
        }

        printf("\n");
    }
}