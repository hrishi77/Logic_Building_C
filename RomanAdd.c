#include<stdio.h>

void RoamanAdd(char *str)
{
	int Arr[]={1,5,10};
	int sum=0;
	
	while(*str != '\0')
	{
		if(*str == 'I')
		{
			sum = sum + Arr[0];
		}
		else if(*str == 'V')
		{
			sum = sum + Arr[1];
		}
		else if(*str == 'X')
		{
			sum = sum + Arr[2];
		}
		str++;
	}
	printf("%d \n",sum);
}
int main()
{
	char arr[] = "XI";
	RoamanAdd(arr);
	return 0;
}
