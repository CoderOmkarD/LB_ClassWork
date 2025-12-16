

#include <stdio.h>
#include <stdbool.h>

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = 2; iCnt <= (iNo / 2); iCnt++)
    {
        if ((iNo % iCnt) == 0)
        {
            iFrequency++;
        }
    }

    if (iFrequency == 0) // No Factors
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