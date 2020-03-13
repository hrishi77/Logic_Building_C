//summation  of array
#include<stdio.h>

int Summation1(int arr[],int N)
{
    int i=0,iSum=0;

    for(i=0; i<N; i++)
    {
        iSum = iSum + arr[i];
    }
    return iSum;
}

int main() 
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int iRet = 0;

    iRet = Summation1(arr,9);

    printf("Summation of array is :%d\n",iRet);    
    return 0;
}