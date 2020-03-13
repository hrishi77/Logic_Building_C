//Count word in c 
#include<stdio.h>

void CountWordSpaceOcc(char arr[])
{
    int i=0,j=0,iCnt=0,iCnt1=0;

    while(arr[i] != '\0') 
    {
        if((arr[i] == ' ')&&(arr[i+1] != ' ')) //Word Count
        {
            iCnt++;
        }
        if (arr[i] == ' ') //Space Count
        {
            iCnt1++;
        }
        i++;
    }    
    printf("Word Count = %d\n",iCnt+1);
    printf("Space Count = %d\n",iCnt1);
   
}


int main()
{
    char arr[256];

    printf("Enter string:");
    scanf("%[^'\n']",arr);

    printf("You Entered String => %s\n",arr);
    CountWordSpaceOcc(arr);

    return 0;
}