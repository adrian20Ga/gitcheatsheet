#include <stdio.h>

int main (int argc, char *argv[]){
	int numbers[4] = {0};
	char name[4] = {'a'};
// we Declared the integer numbers 4 to 0 to start;char name called 4 to the letter "a"
 	
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
// Print some numbers array 0 to 3, however print only 0 	
	
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
// Print each name from 0 to 3 of a name of a declaration of name[4]
	
	printf("name: %s\n", name);
//only print the letter a and use Print for "name"
	
	numbers[0] = 1;
	numbers[1] = 2;
	numbers[2] = 3;
	numbers[3] = 4;
// Each array numbers is being declared from number 1 to 4
	
	name[0] = 'Z';
	name[1] = 'e';
	name[2] = 'd';
	name[3] = '\0';
// Each array name is being declared to be Z, e, d and the 0
	
	printf("numbers: %d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
// Prints the numbers, but this time, the declared numbers
// 1 to 4
	
	printf("name each: %c %c %c %c\n", name[0], name[1], name[2], name[3]);
// Prints the name, but this time, the Zed name
	
	printf("name %s\n", name);
// Prints the name exactly as the name declaration
	
	char *another = "Zed";
// Another way to declare Zed as the name
	
	printf("another: %s\n", another);
// we Print the name as a string
	
	printf("another each: %c %c %c %c\n", another[0], another[1], another[2], another[3]);
// Printing the name Zed as each declaration of another way
	
	return 0;
}