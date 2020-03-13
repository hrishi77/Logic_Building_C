//Reverse string 
#include <stdio.h>

void RevStr(char *str)
{
    char *start,*End;
    char Temp;
    start = str;
    End = str;

    while (*End != '\0')
    {
        End++;
    }
    End--;
    
    while (start < End)
    {
        Temp = *start;
        *start = *End;
        *End = Temp;
        start++;
        End--;
    }
    printf("Rev String is :%s\n",str);
}

int main()
{
    char str[256];

    printf("Enter String:");
    scanf("%[^'\n']",str);

    RevStr(str);

    return 0;
}
