#include <stdio.h>
#include <stdbool.h>

bool CheckDivisible(int iNO1, int iNo2)
{
    if ((iNO1 % iNo2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    bool bRet = false;

    printf("Enter First Number :\n");
    scanf("%d", &iValue1);

    printf("Enter Second Number :\n");
    scanf("%d", &iValue2);

    bRet = CheckDivisible(iValue1, iValue2);

    if (bRet == true)
    {
        printf("It is Completely Divisible");
    }
    else
    {
        printf("It is not Completely Divisible");
    }

    return 0;
}