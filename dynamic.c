#include<stdlib.h>
#include<stdio.h>
int main()
{
int m=4,n=3;
int i=0,j=0;
int *arr=(int*)malloc(m*n*sizeof(int));
int count=1;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
*(arr+i*n+j)=count++;

}
}
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)

{
printf("%d",*(arr+i*n+j));
}
}

}
