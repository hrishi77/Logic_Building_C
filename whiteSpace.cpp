//remove white spaces from string
#include <iostream>
using namespace std;

void removeExtraWhiteSpacs(char src[],char dest[],int src_max_size=1000)
{
  int i = 0,j = 0;
  while(src[i] != '\0')
  {
    int temp = i + 1;
    if(src[i] == ' ')
    {
      while (src[temp] == ' ' && src[temp] != '\0') 
      {
        if (src[temp] == ' ') 
          {
            i++;
          }
          temp++;
      }
    }
    dest[j] = src[i];
    i++;
    j++;
  }
  dest[j] = '\0';
}
int main()
{
  char src[1000];
  char dest[1000];
  cout<<"Enter Input String :"<<endl;
  cin.getline(src,1000);

  removeExtraWhiteSpacs(src,dest,1000);
  cout<<"Result String"<<endl;
  cout<<dest<<endl;
}

