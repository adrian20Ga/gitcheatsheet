#include <stdio.h>

int main (int argc, char *argv []){
	int bugs = 100;
	// Declared variables "bugs" to 100
	double bug_rate = 1.2;
	// Declaring bug_rate to a variable float double 1.2
	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
	// we put print %d to have the variable multiplying 100 to 1.2
	long universe_of_defects = 1L * 1024L * 1024L * 1024L;
	// Declared "long" with a operation of 1 * 1024^3
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
	// Printing the product of universe_of_defects
	double expected_bugs = bugs * bug_rate;
	// Here is multilplying the double of the product of bugs * bug_rate
	printf("You are expected to have %f bugs.\n", expected_bugs);
	// Printing the result of the expected_bugs
	double part_of_universe = expected_bugs / universe_of_defects;
	// Here is dividing the expected_bugs by universe_of_defects
	printf("That is only a %e portion of the universe.\n", part_of_universe);
	//prints the result of this division, 
	char nul_byte = '\0';
	//declare a 0 to  nul_byte
	int care_percentage = bugs * nul_byte;
	// Declared products of "care_per"
	printf("Which means you should care %d%%.\n", care_percentage);
	// Printing the result, =0
	return 0;
}