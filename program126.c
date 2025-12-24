
#include <stdio.h>
#include <stdlib.h>
void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("The Elements are :\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt]); //
    }
}
int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;

    printf("Enter no. of element :\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if(NULL==ptr)//Industrial way of coding
    {
        printf("Enable to allocate memory\n");
        return -1;
    }
    printf("Enter the Element\n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iLength);

    return 0;
}
