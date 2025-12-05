#include <stdio.h>

int strLenX(char str[])
{   
    int iCount=0;
    while (*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    char Arr[] = {'\0'};
    int iRet=0;

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    iRet =strLenX(Arr);

    printf("Length of the String is : %d",iRet);
    return 0;
}