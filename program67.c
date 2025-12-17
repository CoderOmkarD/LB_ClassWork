// Iteration

#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;
    printf("---------------------------------------------------------\n");

    printf("Original value of iNo is :%d\n", iNo);

    while (iNo != 0)
    {
        printf("---------------------------------------------------------\n");
        iDigit = iNo % 10;
        printf("iDigit is :%d\n", iDigit);
        iNo = iNo / 10;
        printf("iNo is:%d\n", iNo);
    }
}
//Time Complexity:

int main()
{
    int iValue = 0;

    printf("---------------------------------------------------------\n");
    printf("Enter Number:\n");
    scanf("%d", &iValue);

    DisplayDigits(iValue);              //Call by Value

    printf("---------------------------------------------------------\n");

    return 0;
}