// Implement a C program to calculate GCD and LCM of 2 input number.

#include <stdio.h>
void take_number(int *num_1, int *num_2);
int GCD(int GCD_NUM_1, int GCD_NUM_2);
int LCM(int LCM_NUM_1, int LCM_NUM_2);

int main()
{
    int num_1, num_2;
    printf("GCD and LCM Calculator");
    take_number(&num_1, &num_2);
    printf("GCD is %d and LCM is %d", GCD(num_1, num_2), LCM(num_1, num_2));
}
void take_number(int *num_1, int *num_2)
{
    printf("\nEnter the 1st Number ");
    scanf("%d", num_1);
    printf("\nEnter the 2nd Number ");
    scanf("%d", num_2);
}
int GCD(int GCD_NUM_1, int GCD_NUM_2)
{
    while (GCD_NUM_2 != 0)
    {
        int temp = GCD_NUM_2;
        GCD_NUM_2 = GCD_NUM_1 % GCD_NUM_2;
        GCD_NUM_1 = temp;
    }
    return GCD_NUM_1;
}

int LCM(int LCM_NUM_1, int LCM_NUM_2)
{
    return (LCM_NUM_1 * LCM_NUM_2) / GCD(LCM_NUM_1, LCM_NUM_2);
}
