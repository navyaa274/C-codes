#include <stdio.h>

int main()
{
    int num,t,d,rem,sum=0;
    scanf("%d",&num);
    t=num;


    while (t>0)
    {
        rem=t%10;
        sum=sum+rem;
        d=t/10;
        t=d;
    }
    printf("%d\n",sum);
    printf("%c",64+sum);

    return 0;
}
