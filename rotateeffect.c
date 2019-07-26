#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[]){
int arr[argc];
int arr1[argc];
int i=0,j=0,a=0;
for( i=0;i<argc;i++)
{
arr[i]=atoi(argv[i+1]);
}
scanf("%d",&a);
int temp[a];
for(i=0;i<a;i++)
{
temp[i]=arr[i];
}
for(i=a;i<argc;i++)
{
arr1[j]=arr[i];
j++;
}
for(i=0;i<a-1;i++)
{
arr1[j]=temp[i];
j++;
}
for(j=0;j<argc;j++)
{
printf("%d",arr1[j]);
}
}
