#include <stdio.h>

void take(int *a);
void swap(int *a, int *b);

void main()
{
    int a, b;
    printf("Enter a value for a :");
    take(&a);
    printf("Enter a value for b :");
    take(&b);
    printf("Before Swap a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swap a = %d and b = %d", a, b);
}

void take(int *a)
{
    scanf("%d", a);
}

void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}