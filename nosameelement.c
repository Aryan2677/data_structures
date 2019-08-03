#include<string.h>
#include<stdio.h>
int main(){
int i=0,n=0,n1=0,j=0,k=0;
char str[20];
char str1[20];
char str2[20];
gets(str);
gets(str1);
n=strlen(str);
n1=strlen(str1);
for(i=0;i<n;i++){
for(j=0;j<n1;j++){
if(str[i]!=str1[j])
{
str2[k]=str[i];
k++;
}
}
}
puts(str2);
}
