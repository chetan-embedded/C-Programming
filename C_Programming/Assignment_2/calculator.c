// 1. Implement a choice based arithmetic calculator (1-calculator,2-sub,3 mul,4-div etc), by implementing functions.

#include <stdio.h>
void take_num(int *num);
int calculator(int num[], int count, int choice);
void storage(int store[], int count);
int main()
{
    int choice, count;
    printf("To DO ADDITION Enter 1\nTo DO SUBTRACTION Enter 2\nTo DO MULTIPLICATION Enter 3\nTo DO DIVISION Enter 4\nEnter the choice code ");
    take_num(&choice);

    printf("Enter how many numbers you want to calculate: ");
    take_num(&count);

    int array[count];
    storage(array, count);
    switch (choice)
    {
    case 1:
        printf("You have chhosen ADDITION\n");
        printf("ADDITION IS: %d", calculator(array, count, choice));
        break;

    case 2:
        printf("You have chhosen SUBTRACTION\n");
        printf("SUBTRACTION IS: %d", calculator(array, count, choice));
        break;

    case 3:
        printf("You have chhosen MULTIPLICATION\n");
        printf("MULTIPLICATION IS: %d", calculator(array, count, choice));

        break;

    case 4:
        printf("You have chhosen DIVISION\n");
        printf("DIVISION IS: %d", calculator(array, count, choice));

        break;

    default:
        printf("INVALID USER INPUT !!!\n");

        break;
    }
}
void take_num(int *num)
{
    scanf("%d", num);
}
int calculator(int num[], int count, int choice)
{
    int add = 0, sub = num[0], mul = 1, div = num[0];
    if (choice == 1)
    {
        for (int i = 0; i < count; i++)
        {
            add += num[i];
        }
        return add;
    }

    else if (choice == 2)
    {
        for (int i = 1; i < count; i++)
        {
            sub -= num[i];
        }
        return sub;
    }

    else if (choice == 3)
    {
        for (int i = 0; i < count; i++)
        {
            mul *= num[i];
        }
        return mul;
    }

    else if (choice == 4)
    {
        for (int i = 1; i < count; i++)
        {
            div /= num[i];
        }
        return div;
    }

    return 0;
}

void storage(int store[], int count)
{
    int temp = 0;
    for (int i = 0; i < count; i++)
    {
        printf("Enter the %d number ", i + 1);
        take_num(&store[i]);
    }
}