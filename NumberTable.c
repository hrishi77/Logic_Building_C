//Number table
#include <stdio.h>

void NumberTable(int No)
{
    int i=0;

    for(i=1; i<=10; i++)
    {
        printf("%d\t",i*No);
    }
}

int main() 
{
    int iValue=0;
    printf("Enter  Number:");
    scanf("%d",&iValue);

    NumberTable(iValue);

    return 0;
}