#include <stdio.h>
#include "main.h"

void main(){
	char* hw = "HIIIII .. not wierd";
	int len;
	len = string_length(hw);
	printf("The length of '%s' is %d\n", hw, len);
}
