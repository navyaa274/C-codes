#include<stdio.h>
int main()
{
    int year,month;
    printf("enter month:");
    scanf("%d",&month);
    printf("enter year");
    scanf("%d",&year);
    switch(month)
    {

    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("month has 31 days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("month has 30 days");
        break;

    case 2:
          if(year%4==0)
            {
                if (year%100==0)
                {
                    if (year%400==0)
                        {
                            printf("this is a leap year and has 29 days");

                        }

                }
                else
                    {
                        printf("this is a leap year and has 29 days");

                    }

        }
        else
        {
            printf("this is not a leap year and has 28 days");


        }
        break;

    default:
        printf("invalid input");
        break;





    }



    return 0;
}
