#include <stdio.h>

int main()
{
    int a, b, c, ac, bc, cc, avg;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter value for c: ");
    scanf("%d", &c);
    ac = a*a*a ;
    bc = b*b*b ;
    cc = c*c*c ;
    avg = (ac+bc+cc)/3 ;
    printf("Cubes of three values are: %d%d%d", ac, bc, cc);
    printf("\nAverage of three cubes is: %d",avg);

    return 0;
}
