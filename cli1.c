#include <stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]) {
	char arr[] = {'a','b','c','\0'};
	char *ptr = arr;
	printf("%s", (ptr));

	return 0;
}

