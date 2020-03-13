//Chekc pallindrome  
#include <stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkPallindrome(char *str1)
{
    char Temp;
    char *Start,*End;

    Start = str1;
    End = str1;

    while (str1 == NULL)
    {
        return FALSE;
    }

    while (*End != '\0')
    {
        End++;
    }
    End--;

    while (Start < End)
    {
        if(*Start != *End)
        {
            return FALSE;
        }
        return TRUE;
        Start++;
        End--;
    }
    
    printf("%s \n",str1);
}
int main()
{
    char arr[25] = "nitin";
    BOOL bRet = FALSE;
    bRet = chkPallindrome(arr);

    if(bRet == TRUE)
    {
        printf("String is Pallindrome \n");
    }
    else
    {
        printf("String is not Pallindrome\n");
    }

    return 0 ;
}

