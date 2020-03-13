//Add Matrix col and rows

#include<stdio.h>
#include<stdlib.h>

void add(int **arr,int R,int C)
{
    int i=0, j=0, add=0 , sum2=0, sum3=0;;
//for rows addition
    
    for(i=0; i<R; i++)
    {
        for(j=0; j<C; j++)
        {
            printf("%d\t",arr[i][j]);
            add = add + arr[i][j];
        }
        printf("%d\t",add);
        add = 0;
        printf("\n");
    }
    
    for(i=0; i<C; i++)
    {
        for(j=0; j<R; j++)
        {
            add = add + add;
        }
        printf("%d\t",add);
        add = 0;
    }
    printf("\n\n");
}

int main()
{
    int **arr = NULL;
    int R=0,C=0,j=0,i=0;

    printf("Enter the rows:");
    scanf("%d",&R);
    printf("Enter the Cols:");
    scanf("%d",&C);

    arr = (int**)malloc(R *sizeof(int*));

    for(i=0;i<R; i++)
    {
        arr[i] = (int*)malloc(C *sizeof(int));
    }
    
    printf("Enetr the values:");

    for(i=0; i<R; i++)
    {
        for(j=0; j<C; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    add(arr,3,3);

    return 0;
}