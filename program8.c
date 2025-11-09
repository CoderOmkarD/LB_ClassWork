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
        Display the Addition on screen
    STOP
*/

#include <stdio.h>

float AdditionTwoNumbers(float fNo1, float fNo2)
{
    float fSum = 0;
    fSum = fNo1 + fNo2; // Business Logic
    return fSum;
}
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
// fRet=catching the return value
