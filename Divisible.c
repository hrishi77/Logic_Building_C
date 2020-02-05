//Check number is Divisible by 3
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Divisible(int No)
{
    if(No %3 == 0)
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
    int iVal=0;
    BOOL bRet = FALSE;

    printf("Enter Number number:");
    scanf("%d",&iVal);

    bRet = Divisible(iVal);

    if(bRet == TRUE)
    {
        printf("Number is Divisible by 3\n");
    }
    else
    {
        printf("Number is Not Divisible by 3\n");
    }
    
    return 0;
}



