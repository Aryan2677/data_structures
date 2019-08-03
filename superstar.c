#include <stdio.h>
#include<stdlib.h>
int main(){
int arr[]={1,2,3,4,5,6};
for(int i=0;i<6;i++){
        for(int k=0;k<6;k++)
        {
                for(int j=i;j<k+1;j++)
                {
                        printf("%d",arr[j]);
                        
                        
                }
                  
                printf("\n");
        }
        printf("\n");
}

}


