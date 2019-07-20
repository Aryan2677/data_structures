#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[] ){
int i=0;

int arr[argc],arr1[argc];
for(i=0;i<argc;i++)
{
arr[i]=atoi(argv[i]);
}
i=argc-1;
for(int j=0;j<argc;j++)
{
arr1[j]=arr[i];
i--;
}
for(int j=0;j<argc;j++)
{
printf("%d",arr1[j]);
}
}

