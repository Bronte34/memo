#include <stdio.h>
#include <stdlib.h>

int main (void) {
	char input_string[20];
	long int num;
	char *endp;

	puts("整数を入力");
	fgets(input_string, sizeof(input_string), stdin);
	num = strtol(input_string, &endp, 10);
	printf("num = %ld\n",num);

	return 0;
}
	

