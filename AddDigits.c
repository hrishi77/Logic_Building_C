//Addition of Digits 
#include<stdio.h>

void RevNumber(int No)
{
    int iDigit=0,Add=0;

    while(No != 0)
    {
        iDigit = No%10;
        Add = Add + iDigit;
        No = No/10;
    }
    printf("%d \n",Add);
}

int main()
{
    int iValue = 1111;

    RevNumber(iValue);
    return 0;
}