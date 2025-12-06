#include <stdio.h>

int Vowels(char str[])
{   
    int iCount=0;
    while (*str != '\0')
    {   
        if((*str=='o') ||  (*str=='a') || (*str=='e')|| (*str=='i') || (*str =='u'))
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

    iRet =Vowels(Arr);

    printf("Vowels in string is : %d",iRet);
    return 0;
}