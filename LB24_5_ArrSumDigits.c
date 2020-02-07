//print sum of array number Digits.
#include <stdio.h>
#include <stdlib.h>
int DigitSum(int iNo)
{
    int iDigit =0,iSum = 0 ;
    while(iNo != 0)
    {
        iDigit = iNo%10;
        iSum = iSum + iDigit;
        iNo = iNo/10;
    }
    return iSum;
}

void ArrSumDigits(int arr[],int N)
{
    int i=0,iDigit=0,iRet=0;

    for(i=0; i<N; i++)
    {
        iRet = DigitSum(arr[i]);
        printf("%d\t",iRet);
    }
    printf("\n");
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
    
    ArrSumDigits(arr,iSize);

    return 0;
}
