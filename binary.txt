#include <stdio.h>
int main(){
	int arr[10]={0};
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	int num=0;
	scanf("%d",&num);
	int result=binarysearch(arr,0,9,num);
	if(result==-1){
	printf("Number doesnt exist");
	}
	else{
	printf("Number exist at %d",result);
	}
	return 0;
}
int binarysearch(int arr[],int a,int b,int num){
if(b>=a){
int mid=l + (r-l)/2;

if(arr[mid]==num){
	return mid;
}
if(arr[mid]>num){
	return binarysearch(arr,a,mid-1,num);
}
return binarysearch(arr,mid+1,b,num);
}
return -1;
}
