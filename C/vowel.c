#include<stdio.h>

int main()
{
    char a, e, i, o, u, ch;

    printf("enter the character: ");
    scanf("%c", &ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
        printf("it is a vowel");
    }
    else
    {
        printf("it is not a vowel");
    }
    return 0;
}
