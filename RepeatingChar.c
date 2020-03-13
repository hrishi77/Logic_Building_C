//repeating character from string 
#include <stdio.h>
#include <string.h>

void RepartingChar(char *str)
{
    int i=0,j=0;

    for(i=0; str[i] != '\0'; i++)
    {
        for(j=i+1; str[j] != '\0'; j++)
        {
            if(str[i]==str[j])
            {
                printf("%c \n",str[j]);
                break;
            }
        }
    }
    
}

int main()
{
    char str[] = "aataadgg";

    RepartingChar(str);
    return 0;
}