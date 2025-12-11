/*

step 1:Understand the problem statement
step 2:Write the Algorithm
step 3:Decide the Programming Language
step 4:Write the Program
step 5:Test the program

*/

/*
        Algorithm
    START
        Accept first number as NO1
        Accept second number as NO2
        Perform addition NO1 & NO2
        If the input is negative then convert it into positive
        Display the Addition on screen
    STOP
*/

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//              Required Header Files
//
///////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//  Function Name:  AdditionTwoNumbers
//  Description:    It is used to Addition
//  Input:          Float,Float
//  Output:         Float
//  Author:         Omkar Santosh Durge
//  Date:           09/10/2025
//
///////////////////////////////////////////////////////////////////////////////////////////////////


float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;

    // Updator
    if (fNo1 < 0.0f)
    {
        fNo1 = -fNo1;
    }

    if (fNo2 < 0.0f)
    {
        fNo2 = -fNo2;
    }
    fSum = fNo1 + fNo2; // Business Logic
    return fSum;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
//
//        Entry Point Function For the Application
//
///////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f, fRet = 0.0f;

    printf("Enter the first number :\n");
    scanf("%f", &fValue1);

    printf("Enter the second number :\n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1, fValue2); // function call

    printf("The Addition is :%f", fRet);

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////
//
//         Testcases Handled by the application
//
//  Input1:10.3         Input2:3.2              Output=13.7       
//  Input1:-10.3        Input2:3.2              Output=13.7       
//  Input1:10.3         Input2:-3.2             Output=13.7       
//  Input1:-10.3        Input2:-3.2             Output=13.7       
//  Input1:10.3         Input2:0.0             Output=10.3           
//
///////////////////////////////////////////////////////////////////////////////////////////////////
// fRet=catching the return value
