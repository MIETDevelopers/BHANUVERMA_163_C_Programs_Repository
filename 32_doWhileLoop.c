//Program to Demonstrate do while loop
//Writted by -- BHANU VERMA
//29-03-2021

#include <stdio.h> //Pre-Process directive to include standard input output header file
 
int main () { //Main function body starting

   /* local variable definition */
   int a = 10;

   /* do loop execution */
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
 
   return 0; 
}