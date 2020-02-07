///First given char occurence in string
#include <stdio.h>

int FirstChar(char *str,char ch)
{
    int i=0,j=0;

    while(str[i] != '\0')
    {
        if(str[i] == ch)
        {
            break;
        }
        i++;
    }
    return i;
}

int main()
{
    char str[100],ch = '\0';
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']",str);  
    printf("Enter the character: ");
	scanf(" %c",&ch);
     
    iRet = FirstChar(str,ch);

    printf("%c occures in string at %d\n",ch,iRet);
    return 0;
}
