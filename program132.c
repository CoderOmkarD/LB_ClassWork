#include <stdio.h>
#include <stdlib.h>

float  Average(int Arr[], int iSize)
{
    int iCnt = 0;
    int iSum = 0;

    
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {   
       
            iSum=iSum+Arr[iCnt];
        
        
    }
    return ((float) iSum /(float)iSize);
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

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

    
    fRet = Average(ptr, iLength);

    printf("Average is : %f ", fRet);

    return 0;
}
