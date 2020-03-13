//open and read File in c
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Name[30],arr[30];
    int Fd = 0;
    int iRet = 0;

    printf("Enter file name:");
    scanf("%s",Name);

    Fd = open(Name,O_RDONLY);

    iRet = read(Fd,arr,30);

    if(Fd == -1)
    {
        printf("Unable to open file");
        return-1;
    }

    printf("File is Sucessfully open with fd %d\n",Fd);

    printf("Data From file :\n %s \n",arr);
    
    //close(Fd);

    return 0;
}


