/*
START
        Accept number and store as no
        Divide NO by 2
        If the remainder 0
            then display as even
        Otherwise
            Display as odd
STOP
*/
#include <stdio.h>

void CheckEvenOdd(int iNo1)
{
    int iRem = 0;
    iRem = iNo1 % 2;

    if (iRem == 0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return 0;
}