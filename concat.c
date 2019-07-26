#include<stdio.h>
#define CONCAT(a,b) a##b;
int main(){

int x=CONCAT(1,2);
printf("%d",x);
}

