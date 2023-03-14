#include <stdio.h>
#include <conio.h>

int main()
{
    int a, b, c;

    printf("Enter value of a: ");
    scanf("%d", &a);
    printf("Enter value of b: ");
    scanf("%d", &b);
    printf("Enter value of c: ");
    scanf("%d", &c);

    if ((a>b) && (a>c))
    {
        printf("\na is the greatest among the three!");
    }
    else if ((b>a) && (b>c))
    {
        printf("\nb is the greatest among the three!");
    }
    else
    {
        printf("\nc is the greatest among the three!");
    }
    getch();
}
