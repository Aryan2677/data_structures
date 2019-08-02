#include<stdio.h>
int main(){
int m=4,n=3,i=0,j=0;
int **arr=(int**)malloc(m*sizeof(int*));
int count=1;
for(i=0;i<m;i++){
	arr[i]=(int*)malloc(n*sizeof(int));
}
for(i=0;i<m;i++){
for(j=0;j<n;j++){
*(*(arr+i)+j)=count++;
printf("%d",*(*(arr+i)+j));

}
printf("\n");
}
}

