#include<stdio.h>
#include<stdlib.h>

typedef  int * IPTR ;

int FrequecnyCalculate(int Arr[],int iSize)
{
    int iCnt=0;
    int iCountFrequency=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==11)
        {
            iCountFrequency++;
        }
    }

    return iCountFrequency;
}


int main()
{

    int iLength=0,iRet=0;
    IPTR iPtr=0;
    int iCnt=0;

    printf("Enten the no.of element\n");
    scanf("%d",&iLength);


    //step 1 : Allocate the memory
    iPtr=(IPTR) malloc(iLength * sizeof(int));

    if(NULL==iPtr)
    {
        printf("Enable to allocate the memory\n");
        return -1;
    }

    printf("Enter the element:\n");

    for (iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }
    
    //step 2 : Use the memory 
    //call to the function which contain business logic
    iRet=FrequecnyCalculate(iPtr,iLength);

    printf("The frequency of 11 is  : %d",iRet);


    //step 3 : Free the Memory
    free(iPtr);


    return 0;
}