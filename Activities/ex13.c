//13
#include <stdio.h>
int main(int argc, char *argv[])
{
 if(argc != 2) {
 printf("ERROR: You need one argument.\n");
 // this is how you abort a program
 return 1;
 }
 int i = 0;
 for(i = 0; argv[1][i] != '\0'; i++) {
 char letter = argv[1][i];
 switch(letter) {
 case 'a':
 case 'A':
 printf("%d: 'A'\n", i);
 break;
 case 'e':
 case 'E':
 printf("%d: 'E'\n", i);
 break;
 case 'i':
 case 'I':
 printf("%d: 'I'\n", i);
 break;
 case 'o':
 case 'O':
 printf("%d: 'O'\n", i);
 break;
 case 'u':
 case 'U':
 printf("%d: 'U'\n", i);
 break;
 case 'y':
 case 'Y':
 if(i > 2) {
 // nothing but the Y
 printf("%d: 'Y'\n", i);
 }
 break;
 default:
 printf("%d: %c is not a vowel\n", i, letter);
 }
 }
 return 0;
 }



//extra


//QUESTION 2: Use the ',' (comma) to initialize letter in the for-loop: It prints the same

	/*
    int i = 0;
    char letter = 0;
    for (i = 0; letter = argv[1][i], letter != '\0'; i++) { //HEREEEEEEE
        switch (letter) {
            case 'a':
            case 'A':
                printf("%d: 'A'\n", i);
                break;
            case 'e':
            case 'E':
                printf("%d: 'E'\n", i);
                break;
            case 'i':
            case 'I':
                printf("%d: 'I'\n", i);
                break;
            case 'o':
            case 'O':
                printf("%d: 'O'\n", i);
                break;
            case 'u':
            case 'U':
                printf("%d: 'U'\n", i);
                break;
            case 'y':
            case 'Y':
                if (i > 2) {
                    // it's only sometimes Y
                    printf("%d: 'Y'\n", i);
                }*/


//question 5
// In the case for 'Y' I have the break outside the if-statement. What's the impact of this and what happens if you move it inside the if-statement. 
//Prove to yourself that you're right.

break inside:
$ ./test1
0: h is not a vowel
1: 'I'
2: h is not a vowel
3: 'I'
break outside:
$ ./test1
1: 'I'
2: 'I' */