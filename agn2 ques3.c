#include <stdio.h>
#include <string.h>
 
void main()
{
  	char str[100];
  	int i, c=1;
 	printf("enter the String :\n ");
 	gets(str);
  	 	   	
  	for(i = 0; str[i]!= '\0'; i++)
	{
		if(str[i] == ' ')
		{
		   c++;	
		} 
	}	
	printf("\n The Total Number of Words in String= %d", c);

}
