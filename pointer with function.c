#include <stdio.h>

int function(int anumber);

int main (int argc, char **argv) {
    int number = 233;
    int *test = 200;

    printf("function(normal variable) %d\n", function(number));
    printf("function(address) %d\n", function(test));
    printf("function(value) %d\n", function(*test));
    return 0;
}

int function(int anumber){
    return anumber;
}