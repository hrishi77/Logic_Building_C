//fibnoacci series without recursion
#include<stdio.h>
/*
void fibonacci(int No)
{
    int n1 = 0,n2 = 1,n3 = 0,i=0;
    
    printf("%d %d ",n1,n2);

    for(i=0; i<No; i++)
    {
        n3 = n1 + n2;
        printf("%d ",n3);

        n1 = n2;
        n2 = n3;
    }
}
*/
//using recursion 
void fibonacci(int No)
{
    static int n1 = 0,n2 = 1,n3 = 0;
    if(No > 0)
    {
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d ",n3);
        fibonacci(No-1);
    }

}

int main()
{
    int iValue=0;
    printf("Enter the value for fibonacci series: ");
    scanf("%d",&iValue);
    printf("%d %d ",0,1);       //add line for recursion 
    
    fibonacci(iValue -2);       //recursion call
    return 0;
}
