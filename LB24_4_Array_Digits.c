//print number from conatins 3 digits
#include <stdio.h>
#include <stdlib.h>
int DigitCount(int iNo)
{
    int iCnt = 0 ;
    while(iNo != 0)
        {
            iCnt++;
            iNo = iNo/10;
        }
        return iCnt;
}

void ArrDigits(int arr[],int N)
{
    int i=0,iDigit=0,iRet=0;

    for(i=1; i<=N; i++)
    {
        iRet = DigitCount(arr[i]);
        if(iRet == 3)
        {
            printf("%d\t",arr[i]);
        } 
    }
}

int main()
{
    int *arr = NULL;
    int iSize=0,i=0;
    
    printf("Enter the size of array:");
    scanf("%d",&iSize);

    arr = (int*)malloc(iSize * sizeof(int));
    printf("Enter the elements of array:");
    for ( i = 0; i < iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    ArrDigits(arr,iSize);

    return 0;
}
