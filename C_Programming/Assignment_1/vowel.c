// Write a C program to find out given character is vowel or not

#include <stdio.h>
void take_char(char *input_char);
int vowel(char isvowel);
void display_char(char display_char);

int main()
{
    char input_char, temp;
    take_char(&input_char);
    temp = vowel(input_char);
    display_char(temp);
}

void take_char(char *input_char)
{
    printf("Enter a charater you have to check: ");
    scanf("%c", input_char);
}

int vowel(char isvowel)
{
    if (isvowel == 'a' || isvowel == 'e' || isvowel == 'i' || isvowel == 'o' || isvowel == 'u')
        return 1;
    else
        return 0;
}

void display_char(char display_char)
{

    if (display_char == 1)
        printf("The entered charater is vowel");

    else
        printf("The entered charater is not vowel");
}
