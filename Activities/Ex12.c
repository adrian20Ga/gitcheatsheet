//12

#include <stdio.h>
int main(int argc, char *argv[])
 {
 int i = 0;
 if(argc == 1)//only one argc {
 printf("You only have one argument. You need to put at least one but less than 4 :).\n");
 } else if(argc > 1 && argc < 4) {
 printf("Here's your arguments:\n");
 for(i = 0; i < argc; i++) {
 printf("%s ", argv[i]);
 }
 printf("\n");
 } else {
 printf("You have too many arguments. You need less than 4.\n");
 }
 return 0;
 }


//QUESTION 1: You were briefly introduced to &&, which does an "and" comparison, so go research online the different "boolean operators":

//There exist 3 basic boolean operators: AND (&&), OR( ||) , and NOT (!). */

//QUESTION 2: Write a few more test cases for this program to see what you can come up with:

				/*
					if (argc == 3) {
        					printf("You only have three argument. You suck.\n");
					}
					else if (argc > 3 && argc < 7  argc ! 2) {
        					printf("Here's your arguments:\n");
        						for (i = 0; i < argc; i++) {
            							printf("%s ", argv[i]);
        						}
					}