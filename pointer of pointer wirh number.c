#include <stdio.h>

int 
main () {

   int num1 = 10;   /* actual variable declaration */
   int num2 = 20;
   int array1[] = {num1, num2};

   /* address stored in pointer variable */
   printf("Address stored in num2 variable: %x\n", &array1[1] );

   /* access the value using the pointer */
   printf("Value of num2 variable: %d\n", array1[1] );




   int *num3 = 10;   
   int *num4 = 20;
   int array2[] = {num3, num4};

   /* address stored in pointer variable */
   printf("Address stored in num2 variable: %x\n", &array2[1] );

   /* access the value using the pointer */
   printf("Value of num2 variable: %d\n", array2[1] );

   return 0;
}