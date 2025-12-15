// Factors of 6

#include <stdio.h>


//Wrong Approach
void DisplayFactors(int iNO)
{

    printf("Factors of 6 \n :");
    if ((iNO % 1) == 0)
    {
        printf("1\n");
    }
    if ((iNO % 2) == 0)
    {
        printf("2\n");
    }
    if ((iNO % 3) == 0)
    {
        printf("3\n");
    }
    if ((iNO % 4) == 0)
    {
        printf("4\n");
    }
    if ((iNO % 5) == 0)
    {
        printf("5\n");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter  Number :\n");
    scanf("%d", &iValue);

    DisplayFactors(iValue);

    return 0;
}