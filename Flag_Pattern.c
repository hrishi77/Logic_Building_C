/*
Input:
    6
optput:

   * * * * * * 
   * * * * *
   * * * *
   * * * 
   * *
   *
   * *
   * * *
   * * * *
   * * * * *
   * * * * * *
*/

#include <stdio.h>

void Pattern(int iNo)
{
    int i=0, j=0;

    for(i=iNo; i>0; i--)
    {
        for(j=0; j<i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    for(i=2; i<=iNo; i++)
    {   
        for(j=0; j<i; j++)
        {   
            printf("* ");
        }
        printf("\n");
    }   
}

int main()
{
    int i;

    printf("Enter the number:");
    scanf("%d",&i);

    Pattern(i);

    return 0;
}
