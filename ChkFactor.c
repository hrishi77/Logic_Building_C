//Check  Second number is Factor of First number or not.
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkFactor(int No1,int No2)
{
    if(No1 % No2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
    
}

int main()
{
    int iVal1=0,iVal2=0;
    BOOL bRet = FALSE;

    printf("Enter Number number:");
    scanf("%d",&iVal1);
    printf("Enter Number number:");
    scanf("%d",&iVal2);

    bRet = ChkFactor(iVal1,iVal2);

    if(bRet == TRUE)
    {
        printf("%d is Factor of %d\n",iVal2,iVal1);
    }
    else
    {
        printf("%d is Not Factor of %d\n",iVal2,iVal1);
    }
    
    
    return 0;
}



