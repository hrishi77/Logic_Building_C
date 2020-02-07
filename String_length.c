//Find string length
#include <stdio.h>

int Strlrn(char *str)
{
    int iCnt=0;

    if(str == NULL)
    {
        return -1;
    }

    while (*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char str[100] = "Hrishikesh Shridhar Nagargje";
    int iRet=0;

    iRet = Strlrn(str);

    printf("The length of string is %d\n",iRet);//28

    return 0;
}
