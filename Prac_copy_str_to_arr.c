#include <stdio.h>
#include <string.h>

int main (void) {
	char str1[40] = {"Hello"};
	printf("arr = %s\n",str1);

	strcpy(str1,"World");
	printf("arr = %s\n",str1);

	return 0;
}
