//check Pallindrome
#include <stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkPallindrome(char *str)
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
        if(*start != *End)
        {
            break;
        }
        start++;
        End--;
    }

    if(start < End)
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char str[256];
    BOOL bRet = FALSE;
    printf("Enter String:");
    scanf("%[^'\n']",str);

    bRet = ChkPallindrome(str);

    if(bRet == TRUE)
    {
        printf("String is Pallindrome\n");
    }
    else
    {
        printf("String is not Pallindrome\n");
    }
    return 0;
}

