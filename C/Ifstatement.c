#include <stdio.h>
#include <conio.h>

int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("\nYou are eligible for voting!");
    }
    else
    {
        printf("\n You are NOT eligible for voting!");
    }
    getch();
}
