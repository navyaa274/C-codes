//Write a Program to perform addition, subtraction, division and multiplication of two numbers given as input by the user.

#include <stdio.h>
#include <conio.h>

int main()
{
    int num, a, b, add, sub, mul, div;

    printf("Enter number to perform operation (add:1, sub:2, mul:3, div:4): ");
    scanf("%d", &num);

    printf("\n\nEnter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);

    switch (num)
    {
    case 1: '1';
       add = a+b ;
       printf("\nSum of a and b is: %d", add);
       break;
    case 2: '2';
        sub = a-b ;
        printf("\nDifference of a and b is: %d", sub);
        break;
    case 3: '3';
        mul = a*b ;
        printf("\nProduct of a and b is: %d", mul);
        break;
    case 4: '4';
        div = a/b ;
        printf("\nQuotient of a and b is: %d", div);
        break;
    default:
        printf("PLEASE ENTER VALID NUMBER!");
    }
    getch();
}
