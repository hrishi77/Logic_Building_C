//calculate percentage
#include<stdio.h>

float Percentage(float No1,float No2)
{
    float per = 0.0;

    per = (No2*100) / No1;

    return per;
}

int main()
{
    float iValue1=0,iValue2=0,iRet=0;

    printf("Enter First number:");
    scanf("%f",&iValue1);
    printf("Enter Second number:");
    scanf("%f",&iValue2);

    iRet = Percentage(iValue1,iValue2);

    printf("Percentage is %f %%\n",iRet);

    return 0;   
}