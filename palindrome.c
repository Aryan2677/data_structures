#include<string.h>
#include<stdio.h>
int main(){
int n=0,i=0,mid=0,m=0;
char str[50];
gets(str);
n=strlen(str);
m=n-1;
mid=n/2;
for(i=0;i<mid;i++){
if(str[i]!=str[m]){
printf("Not a palindrome");
break;
}
m--;
}
if(i==mid)
{
printf("yes it is palindrome");
}

}
