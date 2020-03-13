#include<stdio.h>

int MulDigit(int iNo)
{
    int iDigit=0, iMul=1;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit %2 != 0)
        {
            iMul = iMul * iDigit;
        }
        else
        {
            iMul = 1;
        }
        iNo = iNo/10;
    }
    return iMul;
}

int main()
{
    int ino =0,iRet=0;

    printf("Enter the number:");
    scanf("%d",&ino);

    iRet = MulDigit(ino);

    printf("%d \n",iRet);
    return 0;
}
