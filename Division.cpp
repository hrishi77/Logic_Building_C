//program to Divide two numbers

#include <stdio.h>
///////////////////////////////////////////////////////////////////////////////
//Name			:Divide
//Input			:int,int
//output		:int
//Description		:program to divide two numbers 
//Auther		:Hrishikesh Nagargoje
//Date			:04.09.2019
//Updated		:21.09.2019
//////////////////////////////////////////////////////////////////////////////////

int Divide(int iNo1,int iNo2)
{
	int iAns = 0;
	if (iNo2 <= 0)
	{
		return -1;
	}
	iAns = iNo1/iNo2;
	return iAns;
}

int main()
{
	int iValue1 = 15,iValue2 = 5;
	int iRet = 0;
	iRet = Divide(iValue1,iValue2);
	printf("Division is :%d \n",iRet);
	return 0;
}
