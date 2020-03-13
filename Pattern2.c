/*
Input:4

Output:
    * * * *
    * * * *
    * * * *
    * * * * 
*/

#include <stdio.h>

void PAttern2(int No)
{
    int i=0,j=0;

    for(i=1; i<=No; i++)
    {
        for(j=1; j<=No; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

int main() 
{
    int iValue1=0;

    printf("Enter the number:");
    scanf("%d",&iValue1);
    
    PAttern2(iValue1);
    
    return 0;
}