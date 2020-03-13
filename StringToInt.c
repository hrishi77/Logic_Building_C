//String to Integer 
#include <stdio.h> 

int stringToInt(char *str) 
{ 
	int res = 0,i=0;  

	while(str[i] != '\0')
    {
        res = res * 10 + str[i] - '0';
        i++; 
    } 
	return res; 
} 

int main() 
{ 
	char str[] = "89789"; 
	int val = stringToInt(str);

	printf("%d \n", val);
	return 0; 
} 
