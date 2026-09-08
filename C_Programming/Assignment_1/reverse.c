// Write a C program for reversing 3 digits no.

void take_number(int *a);
void print_number(int a);
int reverse(int number);

int main()
{
    int a, b;
    take_number(&a);
    printf("Your input string is: ");
    print_number(a);
    b = reverse(a);
    printf("Your reverse string is: ");
    print_number(b);
}

void take_number(int *a)
{
    printf("Enter a number you have to reverse :");
    scanf("%d", a);
}
void print_number(int a)
{
    printf("%d\n", a);
}
int reverse(int number)
{
    int rev = 0, store;
    while (number != 0)
    {
        store = number % 10;
        number = number / 10;
        rev = rev * 10 + store;
    }

    return rev;
}