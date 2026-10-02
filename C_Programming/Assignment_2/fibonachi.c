// Implement a C program to print Fibonacci series  ( 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 ..... )
#include <stdio.h>
int main()
{
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci series: %d %d ", first, second);
    for (int i = 2; i < n; i++)
    {
        next = second + first;
        printf("%d ", next);
        first = second;
        second = next;
    }
    return 0;
}