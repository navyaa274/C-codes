#include <stdio.h>

int main()
{
    int n, i=0, sum=0;
    printf("Enter number to get sum till: ");
    scanf("%d", &n);

    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("Sum of numbers till %d: %d", n, sum);
    return 0;
}
