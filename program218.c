#include <stdio.h>

int count(char str[])
{   
    int iCount=0;
    while (*str != '\0')
    {   
        if(*str=='a')
        {
             iCount++;
        }
        
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

    iRet =count(Arr);

    printf("Count of 'a' is : %d",iRet);
    return 0;
}