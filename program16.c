//////////////////////////////////////////////////////////////////////////
//
//          Required Header Files
//
//////////////////////////////////////////////////////////////////////////



#include <stdio.h>                                    //For Input Output
#include <stdbool.h>                                  //For Bool datatype





///////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChekEvenOdd
//  Description:    It is used to check Even or odd
//  Input:          Integer
//  Output:         Float
//  Author:         Omkar Santosh Durge
//  Date:           10/10/2025
//
///////////////////////////////////////////////////////////////////////////////

bool CheckEvenOdd(int iNo1)
{
    int iRem = 0;
    iRem = iNo1 % 2;

    if (iRem == 0)
    { return true; }
    else
    { return false; }
}

///////////////////////////////////////////////////////////////////////////////
//
//          Entry point function of the application
//
///////////////////////////////////////////////////////////////////////////////





int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Number :\n");
    scanf("%d", &iValue);

    bRet= CheckEvenOdd(iValue);

    if(bRet==true)
    { printf("%d is Even Number",iValue); }
    else
    { printf("%d is Odd Number",iValue); }

    return 0;
}