#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[])
{
int i=0;
int arr1[argc];
int *ptr=arr1;
for(i=0;i<argc;i++)
{
arr1[i]=atoi(argv[i]);
}
int arr[argc];
i=argc-1;
for(int j=0;j<argc;j++)
{
arr[j]=*(ptr+i);
i--;
}
for(int j=0;j<argc;j++)
{
printf("%d",arr[j]);
}
}


