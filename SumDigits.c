//Sum of digits
#include <stdio.h>

int SumDigits(int No)
{
    int iSum=0,iDigit=0;

    while(No != 0)
    {
        iDigit = No % 10;
        iSum = iSum + iDigit;
        No = No /10;
    }
    return iSum;
}

int main()
{
    int num=0,iRet=0;

    printf("Enter the number :");
    scanf("%d",&num);

    iRet = SumDigits(num);

    printf("The sum of digits is %d\n",iRet);

    return 0;
}

