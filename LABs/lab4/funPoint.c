/*
 * Michelle Bergin
 * Lab 4 Part III
 * Function Pointers in an array.
 */
#include <stdlib.h>
#include <stdio.h>

void cat(){
	printf("  ____\n");
	printf(" (.   \\\n");
    printf("   \\  |\n");
    printf("    \\  |\n");
    printf("     \\ |___(\\--/)\n");
    printf("   __/    (  . . )\n");
    printf("  \"'._.    '-.O.'\n");
    printf("       '-.  \\ \"|\\\n");
    printf("          '.,,/'.,,\n");
    printf("\n");
}
void cupcake(){
    printf("           )\n");
    printf("          (.)\n");
    printf("          .|.\n");
    printf("          l8J\n");
    printf("          | |\n");
    printf("      _.--| |--._\n");
    printf("   .-';  ;`-'& ; `&.\n");
    printf("  & &  ;  &   ; ;   \\\n");
    printf("  \\      ;    &   &_/\n");
    printf("   F\"\"\"---...---\"\"\"J\n");
    printf("   | | | | | | | | |\n");
    printf("   J | | | | | | | F\n");
    printf("    `---.|.|.|.---'\n");
    printf("\n");
}
int main(){
	void(*fun_Arr[])() = {cat, cupcake};
	int size = 2;
	int ch = size;
	while(ch > size - 1){
		printf("Enter 0 for cat or 1 for cupcake\n");
		scanf("%d", &ch);
	}

	(*fun_Arr[ch])();
	return 0;
}
