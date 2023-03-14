#include <stdio.h>

int main()
{
    int a, b, c, m, avg;
    printf("Enter value for a:\n");
    printf("Enter value for b:\n");
    printf("Enter value for c:\n");
    scanf("%d%d%d", &a, &b, &c);
    m = a*b*c ;
    avg = (a+b+c)/3 ;
    printf("Product of three values is: %d", m);
    printf("\nAverage of three values is: %d",avg);

    return 0;
}
