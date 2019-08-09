#include<stdio.h>
int main(int argc,const char* argv[])
{
	int i=0,j=0,temp=0;
	int arr[argc-1];
	for(i=1;i<argc;i++)
	{
		arr[i-1]=atoi(argv[i]);
	}
	for(i=1;i<argc-1;i++)
	{
		j=i;
		while(j>0 && arr[j-1]>arr[j])
		{
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			j--;
		}
	}

	for(i=0;i<argc-1;i++)
	{
		printf("%d",arr[i]);
	}
}
