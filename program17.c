#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo1)
{
    

    return ((iNo1%2)== 0);
 
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    bRet= CheckEvenOdd(iValue);

    if(bRet==true)
    {
        printf("%d is Even Number",iValue);
    }
    else
    {
        printf("%d is Odd Number",iValue);
    }

    return 0;
}