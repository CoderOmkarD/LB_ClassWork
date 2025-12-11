#include <stdio.h>

int AdditionTwoNumbers(int iNo1, int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2; // Business Logic
    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter the first number :\n");
    scanf("%d", &iValue1);

    printf("Enter the second number :\n");
    scanf("%d", &iValue2);

    iRet = AdditionTwoNumbers(iValue1, iValue2); // function call

    printf("The Addition is :%d", iRet);

    return 0;
}
// iRet=catching the return value
