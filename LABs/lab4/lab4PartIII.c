/*
 * Michelle Bergin
 * Lab4 Part III
 *
 * Copy and run the program Function Pointers and Implementing Abstractions in C. 
 * You'll need to #include < stdlib.h> for the exit(0) at the end of the program.
 * 
 * Modify the function pointer program so that it stores function pointers in an array instead of a struct. 
 * Also print out a menu for the user and have the program prompt the user for an integer to select a function to run. 
 * Make sure you check that the integer response is within range. 
 * Use the C function atoi to convert the user input to an integer index into the array.
 */

#include <stdlib.h>
#include <stdio.h>

struct greet_api
{
	int (*say_hello)(char *name);
	int (*say_goodbye)(void);
};

int say_hello_fn(char *name){
	printf("Hello %s\n", name);
	return 0;
}
int say_goodbye_fn(void){
	printf("Goodbye\n");
	return 0;
}

struct greet_api greet_api = {
	.say_hello = say_hello_fn,
	.say_goodbye = say_goodbye_fn
};

int main(int argc, char *argv[]){
	greet_api.say_hello(argv[1]);
	greet_api.say_goodbye();

	printf("%p, %p, %p\n", greet_api.say_hello, say_hello_fn, &say_hello_fn);

	exit(0);
}
