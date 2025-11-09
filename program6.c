#include <stdio.h>

int Addition(int a,int b)
{
    int sum=0;
    sum=a+b; //Business Logic
    return sum;
}
int main()
{
    int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter the first number :\n");
    scanf("%d", &iNo1);

    printf("Enter the second number :\n");
    scanf("%d", &iNo2);

    iAns=Addition(iNo1,iNo2); //function call

    printf("The Addition is :%d", iAns);

    return 0;
}
//in Sir code i=iNo1 and j=iNo2