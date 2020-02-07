//Dynamic 1D array Mulitiplication

#include <stdio.h>
#include <stdlib.h>
int Multiplication(int arr[],int N)
{
    int i=0,iMult=1;

    for(i=0; i<N; i++)
    {
        iMult = iMult * arr[i];
    }
    return iMult;
}

int main()
{
    int *arr = NULL;
    int N=0,i=0,iRet=0;

    printf("Enter the size of array:");
    scanf("%d",&N);

    arr = (int*)malloc(N *sizeof(int));
    printf("Enter the elements of array:");
    for(i=0; i<N; i++)
    {
        scanf("%d",&arr[i]);
    }
    iRet = Multiplication(arr,N);

    printf("Multiplication of array is :%d\n",iRet);

    return 0;
}
