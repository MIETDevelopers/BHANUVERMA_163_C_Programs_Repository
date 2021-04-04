//Swapping numbers using Call by Reference
//Writted by -- BHANU VERMA
//31-03-2021

#include <stdio.h> // Pre Process Directive to include standard input output functions header file
 
void swap(int*, int*);
 
int main() { 

   int x, y;
 
   printf("Enter the value of x and y\n");
   scanf("%d%d",&x,&y);
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   swap(&x, &y); // calling by reference
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0; //Return function of standard library
}
 
void swap(int *a, int *b)
{
   int temp;
 
   temp = *b;
   *b = *a;
   *a = temp;   
}