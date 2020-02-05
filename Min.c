//print minimum number
#include<stdio.h>

int Minimum(int No1,int No2)
{
    if(No1 < No2)
    {
        return No1;
    }
    else
    {
        return No2;
    }
}

int main()
{
    int iVal1=0,iVal2=0,iRet=0;

    printf("Enter first number:");
    scanf("%d",&iVal1);

    printf("Enter second number:");
    scanf("%d",&iVal2);

    iRet = Minimum(iVal1,iVal2);

    printf("Min number is %d\n",iRet);

    return 0;
}



