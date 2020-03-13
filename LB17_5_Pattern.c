/*
Input:4 5
Output:
    1 2 3 4
    2 3 4 5
    3 4 5 6
    4 5 6 7   
*/

#include <stdio.h>

void Pattern3(int iRow,int iCol)
{
    int i=0,j=0;

    for(i=0; i<iRow; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%d ",j+i);
        }
        printf("\n");
    }         
}

int main() 
{
    int iValue1=0,iValue2=0;

    printf("Enter the Rows:");
    scanf("%d",&iValue1);
    printf("Enter the Columns:");
    scanf("%d",&iValue2);
    
    Pattern3(iValue1,iValue2);
    
    return 0;
}