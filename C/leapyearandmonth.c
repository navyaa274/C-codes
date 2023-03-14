#include<stdio.h>

int main()
{
	int year, month, l=0;

	printf("Enter year: ");
	scanf("%d", &year);
	if(year%4==0)
    {
        if (year%100==0)
        {
            if (year%400==0)
            {
                l = 1;
            }
        }
        else
        {
            l = 1;
        }
	}
	else
    {
        l = 0;
    }
	printf("\nEnter month: ");
	scanf("%d", &month);

	switch (month)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if (l==1)
		    {
		        printf("\n%d : a leap year", year);
		        printf("\nThis is a month with 31 days!");
		        break;
		    }
		    else
		    {
		        printf("\n%d : not a leap year", year);
		        printf("\nThis is a month with 31 days!");
		        break;
		    }
		case 4:
		case 6:
		case 9:
		case 11:
			if (l==1)
		    {
		        printf("\n%d : a leap year", year);
		        printf("\nThis is a month with 30 days!");
		        break;
		    }
		    else
		    {
		        printf("\n%d : not a leap year", year);
		        printf("\nThis is a month with 30 days!");
		        break;
		    }
		case 2:
		    if (l==1)
		    {
		        printf("\n%d : a leap year", year);
		        printf("\nThis is a month with 29 days!");
		        break;
		    }
		    else
		    {
		        printf("\n%d : not a leap year", year);
		        printf("\nThis is a month with 28 days!");
		        break;
		    }
		default:
			{
			    printf("\nINVALID INPUT");
			}
    }

	return 0;
}
