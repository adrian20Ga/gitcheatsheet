//10
#include <stdio.h>
int main(int argc, char *states[])
{
 int i = 0;
 for(i = 1; i < argc; i++) {
// in this part i change the code to put the variables in the armunts line
 printf("arg %d: %s\n", i, states[i]);
 }
 // let's make our own array of strings
 //char *states[] = {"California", "Oregon","Washington", "Texas"};
 int num_states = 4;//we created an array with 4 values
 for(i = 0; i < num_states; i++) {
 printf("state %d: %s\n", i, states[i]);
 }
 return 0;
 }

//Extra 


//#3

#include <stdio.h>
int main(int argc, char * argv[]) {
    int i = 0;
    for (i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }
    char * states[] = {
        NULL,
        "Oregon",
        "Washington",
        "Texas"
    };
    int num_states = 4;
    for (i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }
    return 0;

./a.out Guerrero
arg 1: Guerrero
state 0: (null)
state 1: Oregon
state 2: Washington
state 3: Texas
 //(null) it is a  value empty that is often used