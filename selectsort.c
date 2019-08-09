#include<stdio.h>
int main(int argc, const char* argv[])
{
int i,j,temp=0,pos=0;
int arr[argc-1];
int n=argc-1;
for(i=1;i<argc;i++)
{
arr[i-1]=atoi(argv[i]);
}

for(i=0;i<n;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(arr[pos]>arr[j]){
pos=j;
}
}
if(pos!=i)
{ 
temp=arr[i];
arr[i]=arr[pos];
arr[pos]=temp;
}

}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
