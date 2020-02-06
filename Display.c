//Input:'M' 5           '$' 8
//Output : MMMMM        $$$$$$$$
#include <stdio.h>

void Display(int No,char ch)
{
    int i=0;

    for(i=0; i<No; i++)
    {
        printf("%c\t",ch);
    }
    printf("\n");
}

int main()
{
    int i = 0;
    char c = '\0';

    printf("Enter the symball u want print:");
    scanf("%c",&c);
    printf("Enter the number:");
    scanf("%d",&i);

    Display(i,c);

    return 0;
}