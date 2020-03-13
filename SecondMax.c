//Find Second max into array
#include<stdio.h>

void SecondMax(int arr[],int size)
{
    int i=0,Max1,Min1,Max2,Min2;

    Max1 = arr[0];
    Min1 = arr[0];

    for(i=0; i<size; i++)
    {
        if(arr[i] > Max1)
        {
            Max1 = arr[i];
        }
        else if (arr[i] < Min1)
        {
            Min1 = arr[i];
        }
        if(arr[i] > Max2 && arr[i] != Max1)
        {
            Max2 = arr[i]; 
        }
    }
    printf("Max %d , Min %d  Max2 %d\n",Max1,Min1,Max2);
}

int main()
{
    int arr[] = {4,8,7,0};
    int N=4;
    SecondMax(arr,N);
    return 0;
}