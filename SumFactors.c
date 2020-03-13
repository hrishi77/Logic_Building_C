//Display All Factors
#include <stdio.h>

int SumFactors(int No)
{
    int i=0,Sum=0;

    for(i=1; i<=No; i++)
    {
        if((No%i) == 0)
        {
            Sum = Sum + i;
        }
    }
    return Sum;
}

int main()
{
    int iVal1=0,iRet=0;

    printf("Enter Number number:");
    scanf("%d",&iVal1);

    iRet = SumFactors(iVal1);

    printf("Sumation of all Factors is %d\n",iRet);
    return 0;
}



