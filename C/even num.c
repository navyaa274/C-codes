#include <stdio.h>

int main()
{
    int n=0, i=2, a, f;

    printf("Enter final value: ");
    scanf("%d", &f);

    do
    {
        a=n*i;
        printf("%d\n", a);
        n++;
    }while(a<f);

    return 0;
}
