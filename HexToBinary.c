//Hex to binary in c
#include<stdio.h>

void HexBinary(char *str)
{
    long int i=0;

    if(str == NULL)
    {
        return;
    }

    while(str[i] != '\0')
    {
        if(str[i] == '0')
        {
            printf("0000 ");
        }
        else if(str[i] == '1')
        {
            printf("0001 ");
        }
        else if(str[i] == '2' )
        {
            printf("0010 ");
        }
        else if(str[i] == '3')
        {
            printf("0011 ");
        }
        else if(str[i] == '4')
        {
            printf("0100 ");
        }
        else if(str[i] == '5')
        {
            printf("0101 ");
        }
        else if(str[i] == '6')
        {
            printf("0110 ");
        }
        else if(str[i] == '7')
        {
            printf("0111 ");
        }
        else if(str[i] == '8')
        {
            printf("1000 ");
        }
        else if(str[i] == '9')
        {
            printf("1001 ");
        }
        else if(str[i] == 'a')
        {
            printf("1010 ");
        }
        else if(str[i] == 'b')
        {
            printf("1011 ");
        }
        else if(str[i] == 'c')
        {
            printf("1100 ");
        }
        else if(str[i] == 'd')
        {
            printf("1101 ");
        }
        else if(str[i] == 'e')
        {
            printf("1110 ");
        }
        else if(str[i] == 'f')
        {
            printf("1111 ");
        }
        else
        {
        	printf("Invalid Input \n");
        }
        i++;
    }
}

int main()
{
    char str[100];

    printf("Enter the Hex :");
    scanf("%[^'\n']s",str);

    HexBinary(str);
    return 0;
}


                
