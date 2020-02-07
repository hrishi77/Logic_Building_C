//Find frequency of vowels in string
#include <stdio.h>

void Vowels(char *str)
{
    int icnt1=0,icnt2=0,icnt3=0,icnt4=0,icnt5=0,x=0;
    char a,e,i,o,u;

    if(str == NULL)
    {
        return;
    }

    while (str[x] != '\0')
    {
        if (str[x] == 'a')
        {
            icnt1++;
        }
        else if (str[x] == 'e')
        {
            icnt2++;
        }
        else if (str[x] == 'i')
        {
            icnt3++;
        }
        else if (str[x] == 'o')
        {
            icnt4++;
        }
        else if (str[x] == 'u')
        {
            icnt5++;
        }
        x++;
    }

    printf("a = %d\n",icnt1);
    printf("e = %d\n",icnt2);
    printf("i = %d\n",icnt3);
    printf("o = %d\n",icnt4);
    printf("u = %d\n",icnt5);    
}

int main()
{
    char str[100];
    int iRet=0;
    printf("Enter string :");
    scanf("%[^'\n']",str);

    Vowels(str);

    return 0;
}
