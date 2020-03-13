//Merge two arrays
#include <stdio.h>

void MergeArr(int arr1[],int arr2[],int arr2[],int l1,int l2)
{
	int i=0,j=0,k=0;
	
	while(i<l1 && j<l2)
	{
		if(arr1[i] < arr2[j])
			arr3[k++] = arr1[i];
		else 
			arr3[k++] = arr2[j];
	}
	
	
	while(i<l1 )
	{
		arr3[k++] = arr1[i++];
	}
	
	while (j<l2)
	{
		arr3[k++] = arr2[j++];
	}
}

int main() 
{ 
    int arr1[] = {1, 3, 5, 7}; 
    int n1 = sizeof(arr1) / sizeof(arr1[0]); 
  
    int arr2[] = {2, 4, 6, 8}; 
    int n2 = sizeof(arr2) / sizeof(arr2[0]); 
  
    int arr3[n1+n2]; 
    mergeArrays(arr1, arr2, n1, n2, arr3); 
  
    cout << "Array after merging" <<endl; 
    for (int i=0; i < n1+n2; i++) 
        cout << arr3[i] << " "; 
  
    return 0; 
} 

