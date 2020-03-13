//Display rev number
#include <stdio.h>
void RevDigits(int No)
{
    int iDigit=0;

    while(No != 0)
    {
        iDigit = No % 10;
        printf("%d",iDigit);
        No = No /10;
    }
}

int main()
{
    int num=0,iRet=0;

    printf("Enter the number: ");
    scanf("%d",&num);

     RevDigits(num);
    return 0;
}
