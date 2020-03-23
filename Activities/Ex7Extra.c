#include <stdio.h>

int main (int argc, char *argv []){
	int bugs = 100;
	double bug_rate = 1.2;
	printf("You have %d bugs at the imaginary rate of %f.\n", bugs, bug_rate);
	unsigned long universe_of_defects = 1L * 5445454L * 4564664L * 46544L;
	printf("The entire universe has %ld bugs.\n", universe_of_defects);
	double expected_bugs = bugs * bug_rate;
	printf("You are expected to have %f bugs.\n", expected_bugs);
	double part_of_universe = expected_bugs / universe_of_defects;
	printf("That is only a %e portion of the universe.\n", part_of_universe);
	char nul_byte = '\0';
	int care_percentage = bugs * nul_byte;
	printf("Which means you should care %d%%.\n", care_percentage);
	return 0;
}

// Extra credit of Exercise 7.c

// 1. Line 7: the sizes of universe_of_defects has been Changed
// $ gcc ex7withextracredit.c
// ex7withextracredit.c: In function ‘main’:
// ex7withextracredit.c:7:63: warning: int overflow in expression [-Woverflow]
//   unsigned long universe_of_defects = 1L * 5445454L * 4564664L * 4546546544L;
//                                                                ^
// 2. The amount of  numbers are surpassed the limit size
// of the universe_of_defects percentage.
// 3. Line 7: i Changed "long" to "unsigned long"
// An unsigned option makes a declaration that never goes negative
// Which can make the long number to be a more legible flow or it's similar
//we multiply the char and a int cuz already has a characters,
// char is helpful to show a character, 