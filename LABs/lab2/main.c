#include <stdio.h>

int string_length(char *s);

int main(){
	char* hw = "Hellow World!";
	int len;

	len = string_length(hw);
	printf("The length of '%s' is %d\n", hw, len);
}
