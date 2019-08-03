#include<stdio.h>
int main(int argc,const char* argv[])
{
int n=argc-2;
int i=0;
int arr[n];
for(i=2;i<argc;i++){
arr[i-2]=atoi(argv[i]);
//printf("%d",arr[i-2]);
}
int st=0;
int end=n-1;
while(st<end)
{
int temp=arr[st];
arr[st]=arr[end];
arr[end]=temp;
st++;
end--;
}
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
