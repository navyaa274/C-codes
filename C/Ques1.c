#include <stdio.h>

int main()
{
    int l, b, p, a;
    printf("Enter the length of the ground: ");
    scanf("%d", &l);
    printf("Enter the breadth  of the ground: ");
    scanf("%d", &b);
    p = 2*(l+b) ;
    a = l*b ;
    printf("Length of rope required: %d", p);
    printf("\nCarpet required to cover the entire area: %d", a);

    return 0;
}
