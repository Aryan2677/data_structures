#include<stdio.h>
#include<stdlib.h>

int main(int argc,const char  *argv[])
{
	int arr[argc-1];
int j=0;
for(int i=1;i<argc;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
int final_ans[sizeof(arr)];
int f=sizeof(arr)-1;
for(int i=0;i<sizeof(final_ans);i++)
{
final_ans[i]=arr[f];
f--;
}
for(int i=0;i<sizeof(final_ans);i++)
{
printf("%d",final_ans[i]);
}
	return 0;
}
