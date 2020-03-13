//Count number of vowels
#include <stdio.h>

void Vowels(char str[])
{
    int i=0, arr[26] = {0};

    while(str[i] != '\0')
    {
        if((str[i] == 'a')||(str[i] == 'e')||(str[i] == 'i')||(str[i] == 'o')||(str[i] == 'u'))
        {
            arr[str[i]-97]++;
        }
     i++;
    }

    for(i=0; i<26; i++)
    {
        if(arr[i] > 0)
        {
            printf("%c  %d\n",i+97,arr[i]);
        }
        
    }
}

int main()
{
    char str[100] = "aeiou aeio";
    
    Vowels(str);

    return 0;
}