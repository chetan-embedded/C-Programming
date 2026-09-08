// Implement a system to calculate the Grade of the student based on marks in n subjects.

#include <stdio.h>
void take_num(int *no_sub);
void take_array(int arr[], int size, int *fail);
char grade_calculate(int grade[], int size);
void print_result(char grade, int fail);
int main()
{
    int no_sub = 0;
    int is_fail = 0;
    printf("Enter the No of subjects ");
    take_num(&no_sub);
    printf("\nYou have choose %d subjects ", no_sub);
    int sub[no_sub];
    take_array(sub, no_sub, &is_fail);
    print_result(grade_calculate(sub, no_sub), is_fail);
    return 0;
}

void take_num(int *no_sub)
{
    scanf("%d", no_sub);
}

void take_array(int arr[], int size, int *fail)
{
    for (int i = 0; i < size; i++)
    {
        printf("\nEnter %d Subject Marks out of 100 ", i + 1);
        take_num(&arr[i]);
        while (arr[i] > 100 || arr[i] < 0)
        {
            printf("Invalid user input !!");
            printf("\nRe-enter %d Subject Marks out of 100 ", i + 1);

            take_num(&arr[i]);
        }

        if (arr[i] < 35)
        {
            *fail += 1;
        }
    }
}

char grade_calculate(int grade[], int size)
{
    int total_marks = 0;
    for (int i = 0; i < size; i++)
    {
        total_marks += grade[i];
    }

    float percentage = (float)total_marks / size;

    if (percentage >= 90)
    {
        return 'A';
    }
    else if (percentage >= 45)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
}

void print_result(char grade, int fail)
{
    if (fail == 0)
    {
        printf("You got %c Grade", grade);
    }
    else
        printf("You are failed in %d subjects", fail);
}