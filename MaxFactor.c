//Imput :   12      13      22      25      27
//Output :  6       1       11      5       9
//Display All Factors
#include <stdio.h>

int MaxFactors(int No)
{
    int i=0;

    for(i=No/2; i>1; i--)
    {
        if((No%i) == 0)
        {
            break;
        }
    }
    return i;
}

int main()
{
    int iVal1=0,iRet=0;

    printf("Enter Number number:");
    scanf("%d",&iVal1);

    iRet = MaxFactors(iVal1);

    printf("Largest Factors is %d\n",iRet);
    return 0;
}



