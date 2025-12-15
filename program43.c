// Input  12  4 Output true
// Input  12  2 Output true
// Input  12  3 Output true
// Input  12  5 Output false

#include <stdio.h>

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter First Number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second Number :\n");
    scanf("%d", &iValue2);

    if ((iValue1 % iValue2) == 0)
    {
        printf("It is Completely Divisible");
    }
    else
    {
        printf("It is not  Completely Divisible");
    }

    return 0;
}