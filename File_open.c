//open File in c
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    int Fd = 0;

    printf("Enter file name:");
    scanf("%s",Name);

    Fd = open(Name,O_RDONLY);

    if(Fd == -1)
    {
        printf("Unable to open file");
        return-1;
    }

    printf("File is Sucessfully open with fd %d\n",Fd);

   // close(Fd);

    return 0;
}


