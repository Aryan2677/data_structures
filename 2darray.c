#include<stdio.h>
int main(){
int i=0,j=0;
int arr[3][3];
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}


int k=0;
scanf("%d",&k);
int temp=0;
for(i=0;i<k;i++)
{
temp=arr[0][0];
arr[0][0]=arr[1][0];
arr[1][0]=arr[2][0];
arr[2][0]=arr[2][1];
arr[2][1]=arr[2][2];
arr[2][2]=arr[1][2];
arr[1][2]=arr[0][2];
arr[0][2]=arr[0][1];
arr[0][1]=temp;




}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d",arr[i][j]);
}
printf("\n");
}

}
