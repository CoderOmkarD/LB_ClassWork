
#include <stdio.h>

void Display(int Arr[],int iSize)
{
    int iCnt = 0;

    for (iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("%d\n", Arr[iCnt] );//
  
    }
}
int main()
{
    int Brr[] = {10, 20, 30, 40}; //Change (Added 3 More Elements)

    Display(Brr,4); // Display(100,4);  100 is a base address of the array //this is called as call by Addresss"""

    return 0;
}
