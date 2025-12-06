#include <stdio.h>

void CountAll(char str[])
{
    int iCountSmall = 0;
    int iCountCapital = 0;
    while (*str != '\0')
    {
        if ((*str >= 'A') && (*str <= 'Z'))

        {
            iCountCapital++;
        }
        else if ((*str >= 'a')&&(*str <= 'z'))
        {
            iCountSmall++;
        }

        str++;
    }
    printf("Small:%d\n",iCountSmall);
    printf("Capital:%d",iCountCapital);
}

int main()
{
    char Arr[] = {'\0'};

    printf("Enter String:\n");
    scanf("%[^'\n']s", Arr);

    CountAll(Arr);

    return 0;
}