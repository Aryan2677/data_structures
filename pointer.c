#include<stdio.h>
int main()
{
int arr[]={1,2,3,4,5,'\0'};
int *ptr=arr;
while(*ptr!='\0'){

printf("%d",*ptr);
ptr++;
}
return 0;
}
