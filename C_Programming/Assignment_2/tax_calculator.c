// Q2. Implement income tax calculator by considering best possible parameters ( decision, senior citizen benefits, exemption for investment and other possible consideration). Make use of if-else ladder.

#include <stdio.h>
void take_num(int *num);
void take_char(char *char_byte);
int is_same(char decision[]);
int tax(int age, int income, char gender[]);

int main()
{
    int age, income;
    char gender[7];   
    printf("Income Tax Calculator !! \n");

    printf("Enter your age ");
    take_num(&age);

    printf("Enter your income ");
    take_num(&income);

    printf("Enter your gender ");
    take_char(gender);

    printf("You have to pay %d as an tax", tax(age, income, gender));
}
void take_num(int *num)
{
    scanf("%d", num);
}

void take_char(char *char_byte)
{
    scanf("%s", char_byte);
}

int tax(int age, int income, char gender[])
{
    int temp = is_same(gender);
    if (income > 120000 && age >= 60 && temp == 1)
    {
        return ((income - 120000) * 18) / 100;
    }
}

int is_same(char decision[])
{
    int is_male = 0;
    int is_female = 0;
    char male[] = {"male"};
    char female[] = {"female"};

    for (int i = 0; decision[i] != '\0'&& male[i] != '\0'; i++)
    {
        if (decision[i] == male[i])
        {
            is_male++;
        }

        else if (decision[i] == female[i])
        {
            is_female++;
        }

        if (is_male == 4 && male[is_male + 1])
        {
            return 1;
        }
        else if (is_female == 6 && female[is_female + 1])
        {
            return 0;
        }
    }
}