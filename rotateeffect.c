#include<stdio.h>
#include<stdlib.h>
int main(int argc,const char* argv[]){
int arr[argc-1];
int arr1[argc-1];
int i=0,j=0,a=0;
for( i=1;i<argc;i++)
{
arr[i-1]=atoi(argv[i]);
//printf("%d",arr[i-1]);
}

scanf("%d",&a);
int temp[a];
for(i=0;i<a;i++)
{
temp[i]=arr[i];
//printf("%d",temp[i]);
}
for(i=a;i<argc-1;i++)
{
arr1[j]=arr[i];
j++;
}
for(i=0;i<a;i++)
{
arr1[j]=temp[i];
j++;
//printf("%d",arr1[i]);
}
for(j=0;j<argc-1;j++)
{
printf("%d",arr1[j]);
}
}
