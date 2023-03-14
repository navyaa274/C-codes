#include <stdio.h>

int main()
{
    int a, b, add, sub, mul, div, mod ;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    add = a+b ;
    sub = a-b ;
    mul = a*b ;
    div = a/b ;
    mod = a%b ;
    printf("Addition of numbers: %d", add);
    printf("\nSubtraction of numbers: %d", sub);
    printf("\nMultiplication of numbers: %d", mul);
    printf("\nDivision of numbers: %d", div);
    printf("\nModulo division of numbers: %d", mod);

    return 0;
}
