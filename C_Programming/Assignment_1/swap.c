// Write a C program to swap two numbers without using third variable.
#include <stdio.h>
void swap(int *a, int *b);
void display(int a, int b);
void take_number(int *a, int *b);

void main()
{
    int a, b;

    take_number(&a, &b);
    printf("Before swap :");
    display(a, b);
    swap(&a, &b);
    printf("After swap :");
    display(a, b);
}
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;   
    *a = *a - *b;
}

void take_number(int *a, int *b)
{
    printf("Enter a number for a = ");
    scanf("%d", a);
    printf("Enter a number for b = ");
    scanf("%d", b);
}

void display(int a, int b)
{
    printf("a = %d b = %d\n", a, b);
}