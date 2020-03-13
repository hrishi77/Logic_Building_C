//check strings are anagaram or mot
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL chkAnagarm(char str1[], char str2[])
{
    int i=0,ADD=0;
    int arr[26] = {0};

    while(str1[i] != '\0')
    {
        if((str1[i] >= 'a')&&(str1[i] <= 'z'))
        {
            arr[str1[i-'a']]++;
        }
        i++;
    }
    i=0;        //i reset to 0th position
    while(str2[i] != '\0')
    {
        if((str2[i] >= 'a')&&(str2[i] <= 'z'))
        {
            arr[str2[i-'a']]--;
        }
        i++;
    }

    for(i=0; i<26; i++)
    {
        if(arr[i]>0)
        {
            ADD = ADD + arr[i];
        }
    }

    if(ADD ==  0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char p[25] = "hrishikeshhhh";
    char q[25] = "hishihrkeshhh";

    BOOL bRet = FALSE;

    bRet = chkAnagarm(p,q);

    if(bRet == TRUE)
    {
        printf("Strings are Anagram \n");
    }
    else
    {
        printf("Strings are not Anagarm\n");
    }
    return 0;
}