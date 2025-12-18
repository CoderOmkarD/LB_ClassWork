// Iteration
//Sum of Digits
#include <stdio.h>

int SumOfDigits(int iNo)
{
    
    int iSum = 0;
    int iDigit =0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    while (iNo != 0)
    {

        iDigit=iNo%10;
        iNo = iNo / 10;
        iSum=iSum+iDigit;
        
    }

    return iSum;
}
// Time Complexity:

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    iRet = SumOfDigits(iValue); // Call by Value

    printf("Sum of Digits are : %d\n",iRet);

    return 0;
}