#include<stdio.h>
void fun(int a)
{
printf("%p",&a);
}
int main()
{

void(*ptr1)(int)=&fun;
(*ptr1)(10);
return 0;}
