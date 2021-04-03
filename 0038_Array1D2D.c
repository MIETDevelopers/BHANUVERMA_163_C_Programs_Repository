// 1D and 2D arrays passed as arguments to a single function and the function implementation should simply print those arrays passed as arguments
//Writted by -- BHANU VERMA
//31-03-2021


#include <stdio.h> //Pre Process directive to include standard input output functions header file
void disp( char ch)
{
   printf("%c ", ch);
}
int main() //main function body starting
{
   char arr[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j'}; // Array Declaration
   for (int x=0; x<10; x++)
   {
       /* I’m passing each element one by one using subscript*/
       disp (arr[x]);
   }

   return 0; // Return function of standard library

} // main function body ends