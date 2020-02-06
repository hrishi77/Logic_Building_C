//Check  Second number is Factor of First number or not.
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkPerfect(int No)
{
    int i=0, iSum=0;

    for(i=No/2; i>1; i--)
    {
        if(No % i == 0)
        {
            iSum = iSum + i;
        }
    }
    
    if(iSum == No)
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
    int iVal1=0;
    BOOL bRet = FALSE;

    printf("Enter Number number:");
    scanf("%d",&iVal1);
    
    bRet = ChkPerfect(iVal1);

    if(bRet == TRUE)
    {
        printf("%d is Perfect Number\n",iVal1);
    }
    else
    {
        printf("%d is not Perfect Number \n",iVal1);
    }
    
    
    return 0;
}



