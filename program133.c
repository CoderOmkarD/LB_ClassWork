#include<stdio.h>
#include<stdlib.h>


int main()
{

    int iLength=0;
    int *iPtr=0;
    int iCnt=0;

    printf("Enten the no.of element\n");
    scanf("%d",&iLength);


    //step 1 : Allocate the memory
    iPtr=(int *) malloc(iLength * sizeof(int));

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
    //fun(iPtr,iLength);


    //step 3 : Free the Memory
    free(iPtr);


    return 0;
}