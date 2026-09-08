// Check the size of input string without strlen function

#include <stdio.h>

void input(char name[]);

int main()
{
    char name[10];
    printf("Enter a Name ");
    input(name);
    printf("%s", name);
}
void input(char name[])
{
    scanf("%s", name);
}