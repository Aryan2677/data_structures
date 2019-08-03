#include <stdio.h>
int main(int argc,const char* argv[]){
	int arr[argc-2];
	for(int i=2;i<argc;i++){
		//scanf("%d",&arr[i]);
                arr[i-2]=atoi(argv[i]);
	}
	int num=0;
	num=atoi(argv[1]);
	int result=binarysearch(arr,0,argc-2,num);
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
int mid=a + (b-a)/2;

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
