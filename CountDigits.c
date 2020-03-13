//Count digits
#include <stdio.h>
int CountDigit(int iNo)
{
     int iCnt=0;

    while(iNo != 0)
    {
        iCnt++;
        iNo = iNo/10;
    }
   return iCnt;
}

int main()
{
    int iNo=0, iRet=0;

    printf("Enter the number:");
    scanf("%d",&iNo);

    iRet = CountDigit(iNo);

    printf("The number of digits in number is %d \n",iRet);

    return 0;
}
