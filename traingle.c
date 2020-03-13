#include <stdio.h>

void triangle(int rows,char ch)
{
  int i, j,k=0;
  for (i=1; i<=rows; ++i,k=0)
    {
      for (j=1; j<=rows; ++j)
      while (k!=2*i-1) 
      {
        printf("%c",ch);
          ++k;
        }
        printf("\n");
    }
}
int main()
{
  int rows=0;
  char cValue='+';

  printf("Enter the Rows and char:");
  scanf("%d %c",&rows,&cValue);
  
  triangle(rows,cValue);

  return 0;
}

