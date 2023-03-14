#include<stdio.h>
int main()
{
    int age, weight, height;

    printf("enter your age:",);
    scanf("%d",&age);

    printf("enter your weight:",);
    scanf("%d",&weight);

    printf("Enter the height:");
    scanf("%d", &height);

    if(age>=15)
    {
        if((weight>=50)&& (weight<=100))
        {
            if(height>=175)
            {
                printf("you are eligible");
            }
        }
    }
    else
    {
        printf("you are not eligible");
    }
    return 0;
}
