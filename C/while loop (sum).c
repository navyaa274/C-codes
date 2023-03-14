#include <stdio.h>

int main()
{
    int n, i = 1, sum, a;
    sum = 0;
    printf("Enter number of inputs: ");
    scanf("%d", &n);
    while (i<=n)
    {
        printf("Enter number: ");
        scanf("%d", &a);
        sum = sum + a ;
        i++;
    }
    printf("Sum of numbers:%d", sum);
    return 0;
}
