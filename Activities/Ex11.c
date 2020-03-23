//11
#include <stdio.h>
int main(int argc, char *argv[])//argv is our array char*
{
 // put argument and 
 int i = argc-1;
 while(i  >=  0) {
/* I make some changes to print my argv in reverse order changing the i valuve and the condition*/
 printf("arg %d: %s\n", i, argv[i]);
 i--;
 }
 //make a string of char
 char *states[] = { "California", "Oregon","Washington", "Texas"
 };
 int num_states = 4;
 i = num_states-1;
 while(i >= 0) {
 printf("state %d: %s\n", i, states[i]);//finally print
 i--;
 }
 return 0;
}





//Extra

//QUESTION 1: Make these loops count backward by using i-- to start at argc and count down to 0. You may have to do some math to make the array indexes work right:

/*	 								int i = argc - 1;
    									while (i > 0) {
        									printf("arg %d: %s\n", i, argv[i]);
    										i--;
    									}
   									char *states[] = {"California", "Oregon","Washington", "Texas"};
    									int num_states = 4;
									i = num_states - 1;
    									while (i >= 0) {
        									printf("state %d: %s\n", i, states[i]);
        									i--;									}
								PRINTS:
arg 3: Estado3
arg 2: Estado2
arg 1: Estado1
state 0: California
state 1: Oregon
state 2: Washington
state 3: Texas
*/

//QUESTION 2:Use a while loop to copy the values from argv into states.

/*
			int num_states = 4;
			i = 0;
    			while (i < argc) {
        			states[i] = argv[i];
        			i++;
			}
    			i = 0;
    			while (i < num_states) {
        			printf("state %d: %s\n", i, states[i]);
        			i++;
    			}
PRINT:
arg 0: ./Excer
state 0: ./Excer11
state 1: Oregon
state 2: Washington
state 3: Texas
$ ./Excer11 a b c d
arg 0: ./Excer11
arg 1: Estado1
arg 2: Estado2
arg 3: Estado3
arg 4: Estado4
