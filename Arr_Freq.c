// Count number frequency in array 
#include <stdio.h>
#include <stdlib.h>

int Frequency(int arr[],int N,int No)
{
    int i=0,iFreq=0;

    for(i=0; i<N; i++)
    {
        if(arr[i] == No)
        {
            iFreq++;
        }
    }
    return iFreq;
}

int main()
{
    int *arr = NULL;
    int iSize=0,iRet=0,i=0,No=0;
    
    printf("Enter the size of array:");
    scanf("%d",&iSize);
    printf("Enter the number:");
    scanf("%d",&No);

    arr = (int*)malloc(iSize * sizeof(int));
    printf("Enter the elements of array:");
    for ( i = 0; i < iSize; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    iRet = Frequency(arr,iSize,No);

    printf("The Frequency of %d is %d\n",No,iRet);
    return 0;
}
