#include<stdio.h>
int main(){
int n,val,pos,i;
scanf("%d",&n);
int arr[n+1];
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
scanf("%d %d",&pos,&val);
for(i=n-1;i>=pos-1;i--){
arr[i+1]=arr[i];
}
arr[pos-1]=val;

for(i=0;i<n+1;i++){
printf("%d",arr[i]);
}
}

