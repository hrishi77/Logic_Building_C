//Add even number of array
#include <stdio.h>

int EvenAdd(int *arr,int size)
{
    int i=0, add=0;

    if(arr == NULL)
    {
        return -1;
    }

    for(i=0; i<size; i++)
    {
        if(arr[i]%2 == 0)
        {
            add = add + arr[i];
        }
    }
    return add;
}

int main()
{
    int arr[] = {2,4,5,8,7,9};
    int size = 6;

    int Ret = EvenAdd(arr,size);

    printf("Addition of Even is %d  \n",Ret);

    return 0;
}