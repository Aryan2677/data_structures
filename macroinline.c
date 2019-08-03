#include<stdio.h>
int main(){
 inline int square(int x){return x*x;}

int z=36/square(6);
printf("%d",z);
}
