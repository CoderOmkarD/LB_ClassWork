
#include <stdio.h>

void Display(int Arr[])
{
    int iCnt = 0;

    for (iCnt = 0; iCnt < 4; iCnt++)
    {
        printf("%d\n", Arr[iCnt] );//
        //The * (Arr + 0 ) is same as Arr[0]
        //The * (Arr + 1 ) is same as Arr[1]
        //The * (Arr + 2 ) is same as Arr[2]
        //The * (Arr + 3 ) is same as Arr[3]
        // Thats why * (Arr + iCnt) is same as Arr[iCnt]

    }
}
int main()
{
    int Arr[] = {10, 20, 30, 40};

    Display(Arr); // Display(100);  100 is a base address of the array //this is called as call by Addresss"""

    return 0;
}