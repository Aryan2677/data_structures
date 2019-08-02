#include<stdio.h>
int main(){
int m=4,i=0,j=0;

int *arr[m];
int count=1;
for(i=0;i<m;i++){
arr[i]=(int*)malloc(m*sizeof(int));
}
for(i=0;i<m;i++){
for(j=0;j<m;j++){
*(*(arr+i)+j)=count++;
printf("%d",*(*(arr+i)+j));
}
}
}
