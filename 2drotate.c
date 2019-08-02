#include<stdio.h>
int main(){
int n=0,i=0,j=0;
scanf("%d",&n);
int arr[n][n];
//int *ptr=arr;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&arr[i][j]);
}
}
int *ptr;
ptr=arr;

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",*(*(arr+i)+j));
}
printf("\n");
}
}

