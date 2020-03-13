//Count character occurences
#include <stdio.h>

void CharOccurences(char arr[])
{
    int i=0;
    int brr[26]={0};

    while(arr[i] != '\0')
    {
        if((arr[i] >= 'a')&&(arr[i] <= 'z'))
        {
            brr[arr[i]-97]++;
        }
        else if ((arr[i] >= 'A')&&(arr[i] <= 'Z'))
        {
            brr[arr[i]-65]++;
        }
        i++;
    }

    for(i=0; i<26; i++)
    {
        if(brr[i] > 0)
        {
            printf("%c  %d\t",i+97,brr[i]);
        }
    }
}

int main()
{
    char arr[256];

    printf("Enter string:");
    scanf("%[^'\n']",arr);

    printf("You Entered String => %s\n",arr);
    CharOccurences(arr);
    return 0;
}