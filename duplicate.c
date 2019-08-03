#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100],str1[50];
  	int i, j, k;
 
  	printf("\n Please Enter any String :  ");
  	gets(str);
  	int n=strlen(str);	
  	for(i=0;i<n;i++)
  	{
  		for(j=i+1;str[j]!='\0';j++)
  		{
  			if(str[j]==str[i])  
			{
  				for(k=j;k<str[k]!='\0';k++)
				{
                        		str[k]=str[k+1];
				}
 			}
		}
	}
	
	printf("\n The Final String after Removing All Duplicates = %s ", str);
	
  	return 0;
}
