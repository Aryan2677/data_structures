#include<stdio.h>
int main(int argc,const char* argv[]){

int n=argc-3;
int i=0,j=0;
char side=atoi(argv[1]);
int k=atoi(argv[2]);
int arr[n];
for(i=3;i<n;i++)
{
arr[j]=atoi(argv[i]);
j++;
}
int temp[k];
int t=k;
for(i=0;i<k;i++)
{
temp[i]=arr[n-t];
t--;

}
int a=1;
for(i=n-k-a;i>=0;i--)
{
arr[n-a]=arr[n-k-a];
a++;
}
for(i=0;i<k;i++)
{
arr[i]=temp[i];
}

for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
