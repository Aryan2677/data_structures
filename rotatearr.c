#include<stdio.h>
int rotate(int arr[],int k,int n){
int temp=arr[n-1];
int i=0;
for(i=4;i>=0;i--)
{
arr[i+1]=arr[i];
}
arr[0]=temp;

return arr;
}

int main()
{
int i=0, k=0;
int arr[]={1,2,3,4,5,6};
int *ptr=arr;
scanf("%d",&k);
int n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<k;i++)
{
ptr=rotate(arr,k,n);
}
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
}






