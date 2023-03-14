#include <stdio.h>

main()
{
    char n;
    scanf("%c", &n);

    if ((n>='a' && n<='z')||(n>='A' && n<='Z'))
    {
        printf("%c is an Alphabet",n);
    }
    else if (n>='0' && n<='9')
    {
        printf("%c is a Number",n);
    }
    else
    {
        printf("%c is a Special Character",n);
    }
}
