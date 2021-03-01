#include <stdio.h>

int 
main () {

    char* sentence[] = {"one", "two"};    // char * point to a array

    char** paragraph1 = sentence;         // char ** point to "point to a array"

    char** paragraph2 = &sentence[0];

    char*** easy = paragraph1;    // char *** point to "point to point to a array"
    
    printf("%s\n", sentence[0]); // prints "one"
    printf("%c\n", sentence[0][0]); // prints 'o'

    printf("%s\n", paragraph1[0]); // prints "one"
    printf("%c\n", paragraph1[0][0]); // prints 'o'

   return 0;
}