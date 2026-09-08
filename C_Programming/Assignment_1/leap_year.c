// Write a C program to find out given year is leap year or not.

#include <stdio.h>
void take_year(int *year_num);
int leap(int isleap);
void print_year(int year);

int main()
{
    int year;
    printf("Enter a year : ");
    take_year(&year);
    print_year(leap(year));
}

void take_year(int *year_num)
{
    scanf("%d", year_num);
}
void print_year(int year)
{
    if (year)
        printf("The year is leap year");
    else
        printf("The year is Not a leap year");
}
int leap(int isleap)
{
    if (isleap % 4 == 0 && (isleap % 100 != 0 || isleap % 400 == 0))
        return 1;
    else
        return 0;
}