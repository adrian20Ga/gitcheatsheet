#include <stdio.h>

int main (int argc, char *argv[]){
	char numbers[4] = {0};
	int name[4] = {'a'};
 	
	printf("number[0]: %d\n", numbers[0]);
	printf("number[1]: %d\n", numbers[1]);
	printf("number[2]: %d\n", numbers[2]);
	printf("number[3]: %d\n", numbers[3]);
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("name: %s\n", name);
	
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
	
	printf("number[0]: %d\n", numbers[0]);
	printf("number[1]: %d\n", numbers[1]);
	printf("number[2]: %d\n", numbers[2]);
	printf("number[3]: %d\n", numbers[3]);
	
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	printf("name %s\n", name);
	
	char *name = "Zed";
	
	printf("another: %s\n", name);
	
	printf("another each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
	
	return 0;
}

// 1. warnings appears, so we need use $ld instead of %d
// 3. With printf, we can specify the char that we want to print, ando also the number in each string that we want.
// 4. I can  way that it prints from {1} to {4}
// do not compile, return a error about name and each other due to name of that has been declared before
