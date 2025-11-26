#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int *IPTR;
//  < O(N)
bool LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;
    bool bFlag=false;

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] == iNo)
        {   
            bFlag=true;
            break;
        }
    }
    return bFlag;

}

int main()
{

    int iLength = 0;
    IPTR iPtr = 0;
    int iCnt = 0;
    int iValue = 0;
    bool bRet = false;

    printf("Enten the no.of element\n");
    scanf("%d", &iLength);

    // step 1 : Allocate the memory
    iPtr = (IPTR)malloc(iLength * sizeof(int));

    if (NULL == iPtr)
    {
        printf("Enable to allocate the memory\n");
        return -1;
    }

    printf("Enter the element:\n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &iPtr[iCnt]);
    }

    printf("Enten the no. to search :\n");
    scanf("%d", &iValue);

    // step 2 : Use the memory
    // call to the function which contain business logic
    bRet = LinearSearch(iPtr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d is Present", iValue);
    }
    else
    {
        printf("%d is absent", iValue);
    }

    // step 3 : Free the Memory
    free(iPtr);

    return 0;
}