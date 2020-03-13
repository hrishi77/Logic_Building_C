//Display All Factors
#include <stdio.h>

void DispalyFactors(int No)
{
    int i=0;

    for(i=1; i<=No; i++)
    {
        if((No%i) == 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iVal1=0;

    printf("Enter Number number:");
    scanf("%d",&iVal1);

    DispalyFactors(iVal1);

    return 0;
}



