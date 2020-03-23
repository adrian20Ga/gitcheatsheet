#include <stdio.h>

int main(int argc, char * argv[]) {
    // we'll create three variables, a variable to areas with 5 elements, the second variable to only name
    //And the last variable is to the full name
    int areas[] = { 10, 12, 13, 14, 20};
    char name[] = "Zed";
    char full_name[] = {'Z','e','d',' ','A','.',' ','S','h','a','w','\0'};
    areas[1]=160;
    areas[2]=10;
    areas[3]=150;
    name[0]='A';
    name[1]='D';
    name[2]='R';
    name[3]='I';
    full_name[0] = 'A';
    full_name[1] = 'G';
    full_name[2] = 'A';
    name[0] = areas[0];
    printf("The size of an int: %ld\n", sizeof(int));//It'll print the size of a integer number
    printf("The size of areas (int[]): %ld\n", sizeof(areas));//this array contain 5 int and it'll print the number 20
    printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));//Here shows the number of the elements dividing to the size of a integer number
    printf("The first area is %d, the 2nd %d.\n", areas[0], areas[1]); //Here we can show the value in the 0 place and the 1 in the "areas" array
    //in the following prints is the same thing, but with the variable name
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld\n", sizeof(name) / sizeof(char));
    //again but with the variable full name
    printf("The size of full_name (char[]): %ld\n", sizeof(full_name));
    printf("The number of chars: %ld\n", sizeof(full_name) / sizeof(char));
    //finaly we print the name and after the full name values
    printf("name=\"%s\" and full_name=\"%s\"\n", name, full_name);
    return 0;
}



//extra

name[0]='A';
name[1]='D';
name[2]='R';
name[3]='I';
full_name[0] = 'A';
full_name[1] = 'G';
full_name[2] = 'A';
OUT
./a.out
The size of an int: 5
The size of areas (int[]): 20
The number of ints in areas: 5
The first area is 100, the 2nd 160.
The size of a char: 1
The size of name (char[]): 5
The number of chars: 5
The size of full_name (char[]): 12
The number of chars: 12
name="ADRI" and full_name="AGA"

4 bytes=4 × 8 =32 bits
a 32 bits is represent by 2^32=4294967296 values
where positives (whole numbers without simbols): from 0 to 4294967295
positive& negatives (int numbers with simbols) -2147483648 to 2147483647
8 bytes = 8 × 8 = 64 bits