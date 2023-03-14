/* write a C program to print the following as outputs:
1. 2 4 6 8 10 12 14 16 18 20
2. 1 4 9 16 25 36 49 64 81 100
3. 1 4 27 16 125 36
4. 6 1 7 2 8 3 9 4 10 5
*/

#include<stdio.h>
int main()
{
    int n, o, a, b;

    printf("Enter operation number to print output: ");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
        printf("Enter number of digits to print: ");
        scanf("%d", &o);
        a = 2;
        b = 1;

        printf("\n");
        while (b<= o)
        {
            printf("%d ", a*b);
            b++;
        }
        break;

    case 2:
        printf("Enter last value of a: ");
        scanf("%d", &o);
        b = 3;
        n = 1;

        rintf("\n");
        printf("%d ", n);
        while (n<o)
        {
            n = n+b;
            printf("%d ", n);
            b = b+2;
        }
        break;

    case 3:
        break;

    case 4:
        printf("Enter last value of a: ");
        scanf("%d", &o);
        a = 1;
        b = o+1;

        printf("\n");
        while (a<=o)
        {
            printf("%d ", b);
            printf("%d ", a);
            a++;
            b++;
        }
        break;
    }

    return 0;
}
