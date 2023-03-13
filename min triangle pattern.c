/*
1
3 2
6 5 4
10 9 8 7
*/

#include <stdio.h>

int main()
{
    int a,i,j,k,m,n;
    printf("enter number: ");
    scanf("%d",&a);
    k=1;
    n=1;
    for(i=1;i<=a;i++)
    {
        k=n;
        m=1;
        for (j=1;j<=i;j++,m++,n++)
        {
            printf("%d ",k+i-m);
        }
        printf("\n");
    }return 0;
}
