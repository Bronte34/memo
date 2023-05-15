#include<stdio.h>
int main (void) {
	char input_string[80];
	puts("Type the words");
	fgets(input_string, sizeof(input_string), stdin);
	puts(input_string);
	return 0;
}
