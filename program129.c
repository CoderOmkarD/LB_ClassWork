#include <stdio.h>
#include <stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt = 0;
    int iCounter = 0;

    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {   
        if((Arr[iCnt]%2)==0)
        {
            iCounter++;
        }
        
    }
    return iCounter;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter no. of element :\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    if (NULL == ptr) // Industrial way of coding
    {
        printf("Enable to allocate memory\n");
        return -1;
    }
    printf("Enter the Element\n");

    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }

    
    iRet = CountEven(ptr, iLength);

    printf("No. of Even no is : %d ", iRet);

    return 0;
}
