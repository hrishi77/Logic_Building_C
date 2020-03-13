#include <stdio.h>
typedef unsigned long int ULONG;

ULONG Power(int No1,int No2)
{
    int i=0;
    ULONG Mult=1;

    for(i=1; i<=No2; i++)
    {
        Mult = Mult * No1;
    }
    return Mult;
}

int main()
{
    int iValue1=0,iValue2=0,iRet=0;

    printf("Enter First number:");
    scanf("%d",&iValue1);
    printf("Enter Second number:");
    scanf("%d",&iValue2);

    iRet = Power(iValue1,iValue2);

    printf("Result is %d\n",iRet);

    return 0;   
}