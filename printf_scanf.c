/* enter degree F, convert to C
*/

#include <stdio.h>

int
main (int argc, char *argv[]){
    int fahrenheit;
    float celsius;
    printf("Enter degrees F: ");
    scanf("%d", &fahrenheit);

    celsius = (fahrenheit-32.0)*5/9;
    printf("In degrees C is: %.1f\n", celsius);
    return 0;
}    