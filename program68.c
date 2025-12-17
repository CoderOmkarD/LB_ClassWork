// Iteration

#include <stdio.h>

int CountDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo != 0)
    {

        iDigit = iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
}
// Time Complexity:

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue); // Call by Value

    printf("No.of Digits are : %d\n",iRet);

    return 0;
}