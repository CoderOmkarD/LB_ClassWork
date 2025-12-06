#include <stdio.h>

int CountOccurance(char str[],char ch)
{
    int iCount = 0;
    while (*str != '\0')
    {
        if ((*str == ch)) 
            
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
    int iRet = 0;
    char cValue='\0';


    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character to get no.of occurences:\n");
    scanf(" %c",&cValue);//initial space will work on all OS

    iRet = CountOccurance(Arr,cValue);

    printf("Numbers of occurances are : %d", iRet);
    return 0;
}