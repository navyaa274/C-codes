#include<stdio.h>
int fibonacci(int n);
int factorial(int num);
int main()
{
    int num,n;
    printf("enter number you want factorial of :");
    scanf("%d",&num);
    printf("enter the number you want at which you want fibonacci value:");
    scanf("%d",&n);
    printf("factorial of the given number is %d\n",factorial(num));
    printf("answer for the fibonacci part is %d",fibonacci(n));

    return 0;

}

int factorial(int num)
{
    if (num==0||num==1){
        return 1;

    }
    else{
        return num*factorial(num-1);

    }

}
int fibonacci(int n)
{
if(n == 0 || n == 1)
return n;

else
return(fibonacci(n-1) + fibonacci(n-2));
}
