#include<stdio.h>
int main(){
int n1=0,i=0;
scanf("%d",&n1);

char str1[n1];
char str2[n1];
for(i=0;i<n1;i++)
{
scanf("%s",&str1[i]);
}
for(i=0;i<n1;i++){
scanf("%s",&str2[i]);
}
char temp;
for(i=0;i<n1;i++)
{
temp=str1[i];
str1[i]=str2[i];
str2[i]=temp;
}

printf("%s",str1);
printf("\n%s",str2);
}
