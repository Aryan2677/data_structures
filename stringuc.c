#include<stdio.h>
#include<string.h>
int main(){
int k=0,len=0,l=0,i=0,j=0;
char str[40];
char str1[40];
char str2[40];
gets(str);
len=strlen(str);

for(i=0;i<len;i++){
if(str[i]>='a' && str[i]<='z'){
str1[j]=str[i];
j++;
}
else
{
str2[k]=str[i];
k++;
}
}
puts(str1);
puts(str2);
}
