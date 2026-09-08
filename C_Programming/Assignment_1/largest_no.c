// Write a C program to find out biggest of three input numbers.

#include <stdio.h>
void take_number(int *take_num);
void show_number(int display_num);
int find_large_number(int num_1, int num_2, int num_3);

int main()
{
    int num_1, store_num, num_2, num_3;
    printf("Enter the 1st number:");
    take_number(&num_1);
    printf("Enter the 2nd number:");
    take_number(&num_2);
    printf("Enter the 3rd number:");
    take_number(&num_3);
    store_num = find_large_number(num_1, num_2, num_3);
    show_number(store_num);
}

void take_number(int *take_num)
{
    scanf("%d", take_num);
}

int find_large_number(int num_1, int num_2, int num_3)
{
    int largest_num;
    if (num_1 >= num_2 && num_1 >= num_3)
        largest_num = num_1;
    else if (num_2 >= num_1 && num_2 >= num_3)
        largest_num = num_2;
    else
        largest_num = num_3;

    return largest_num;
}

void show_number(int display_num)
{
    printf("Largest number is : %d", display_num);
}
