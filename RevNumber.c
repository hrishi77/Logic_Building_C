//Reverse number 
#include<stdio.h>

void RevNumber(int No)
{
    int iDigit=0;

    while(No != 0)
    {
        iDigit = No%10;
        printf("%d ",iDigit);
        No = No/10;
    }
}

int main()
{
    int iValue = 4689;

    RevNumber(iValue);
    return 0;
}