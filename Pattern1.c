/*
output:
1
22
333
55555
88888888
13131313131313131313131313
 */

#include <stdio.h>

void Pattern(int No)
{
    int old=0,new=1,curr=0;
    int i=0,j=0;

    for(i=0;i<No;i++)
    {
        curr=old+new;
        for(j=0;j<curr;j++)
        {	
            printf("%d",curr);
        }
        printf("\n");
        old=new;
        new=curr;
    }
}

int main()
{

    Pattern(6);
    return 0;
}

