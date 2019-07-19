#include<stdio.h>
int reverse(int arr[],int l)
{
while(l>=0)
{
printf("%d",arr[l]);

return reverse(arr,l-1);
}
}

int main(){
int n;
int arr[n];
scanf("%d",&n);
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}

reverse(arr,n-1);
}
