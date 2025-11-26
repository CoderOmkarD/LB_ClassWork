#include <stdio.h>
#include <stdlib.h>

typedef int *IPTR;
//  < O(N)
int Maximum(int Arr[], int iSize)
{
    int iCnt = 0;
    int iMax = 0;

    iMax = Arr[0]; // Important

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{

    int iLength = 0;
    IPTR iPtr = 0;
    int iCnt = 0;
    int iRet = 0;

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

    // step 2 : Use the memory
    // call to the function which contain business logic
    iRet = Maximum(iPtr, iLength);

    printf("Maximum number is %d", iRet);

    // step 3 : Free the Memory
    free(iPtr);

    return 0;
}