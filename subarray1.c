#include <stdio.h>
#include<stdlib.h>
int main(){
int arr[]={1,2,3,4,5,6};
int arr1[]={0};
int max=0,l=0;
for(int i=0;i<6;i++){
        for(int k=0;k<6;k++)
        {
                for(int j=i;j<k+1;j++)
                {
                        printf("%d",arr[j]);
                        arr1[l]=arr1[l]+arr[j];

                }
                  l++;
                printf("\n");
        }
        printf("\n");
}
max=arr1[0];
for(int i=0;i<sizeof(arr1);i++)
{
if(arr1[i]>max)
{
max=arr1[i];
}
}
}

