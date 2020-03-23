#include <stdio.h>
int main(int argc, char *argv[])
{
 // 2 arrays has been created
 int ages[] = {23, 43, 12, 89, 2};
 char *names[] = {
 "Alan", "Frank",
 "Mary", "John", "Lisa"
 };
 // take the size of ages
 int count = sizeof(ages) / sizeof(int);
 int i = 0;
 for(i = 0; i < count; i++) {
 printf("%s has %d years alive.\n",
 names[i], ages[i]);
 }
 printf("---\n");
 // putpointers to init the arrays
 int *cur_age = ages;
 char **cur_name = names;
 // second way to use pointers
 for(i = 0; i < count; i++) {
 printf("%s is %d years old.\n",
 *(cur_name+i), *(cur_age+i));
 }
 printf("---\n");
 // 3rd way
 for(i = 0; i < count; i++) {
 printf("%s is %d years old again.\n",
 cur_name[i], cur_age[i]);
 }
 printf("---\n");
 // 4th way
 for(cur_name = names, cur_age = ages;
 (cur_age - ages) < count;
 cur_name++, cur_age++)
 {
 printf("%s lived %d years so far.\n",
 *cur_name, *cur_age);
 }
 return 0;
}


Extra//

// Rewrite all the array usage in this program so that it's pointers.

/* 
for (i = 0; i < count; i++) {
    printf("%s had %d years alive.\n", *(names + i), *(ages + i));
}*/
