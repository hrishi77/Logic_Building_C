//Find Minimum and maximum in array.
#include <stdio.h>
#include <stdlib.h>

void MinMaxArray(int arr[],int N)
{
    int i=0,iMax=0,iMin=0;

    iMax = arr[0];
    iMin = arr[0];
    
    for(i=0; i<N; i++)
    {
        if(arr[i] > iMax)
        {
            iMax = arr[i];
        }
        else if(arr[i] < iMin)
        {
            iMin = arr[i];
        }
    }
    printf("MAximum number of array is %d\n",iMax);
    printf("Minimum number of array is %d\n",iMin);
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
    
    MinMaxArray(arr,iSize);

    return 0;
}
