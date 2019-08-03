#include<stdio.h>
int subarray(int arr[],int n)
{
for(int i=0;i<n;i++)
{
for(int j=i;j<n;j++){
for(int k=i;k<=j;k++)
{
printf("%d",arr[i]);

}
printf("\n");
}
}
}

int main()
{
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
subarray(arr,n);
}
