#include<stdio.h>
int main()
{
int i,j,k,n=0;
scanf("%d",&n);
int a[n][n];
int a1[n][n];
k=n-1;
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
a1[j][k]=a[i][j];
}
k--;
}

for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d",a1[i][j]);
}
printf("\n");
}
}
