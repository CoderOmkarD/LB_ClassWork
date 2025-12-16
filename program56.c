#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {

            break; // Optimization
        }
    }

    if (iCnt>(iNo/2)) // No Factors   it can e used also  ((iNo % iCnt) == 0) == 0)
    {
        return true;
    }

    else
    {
        return false; // Atleast one Factor
    }
}

int main()
{

    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is Prime Number", iValue);
    }
    else
    {
        printf("%d is not Prime Number", iValue);
    }

    return 0;
}

/*
Time Complexity for Prime :O(n/2)
Time Complexity for  Non Prime : either 1 or 2
*/