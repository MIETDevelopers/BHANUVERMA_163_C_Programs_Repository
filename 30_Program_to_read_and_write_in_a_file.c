// Program to read and write in a file
// Written by -- BHANU VERMA
// 22-03-2021

#include <stdio.h> // Pre-Process directive to include standard input output functions header file
#include <stdlib.h> //Pre-Process directive to include standard library functions header file

int main() //Main Function body starting 
{
   int num;
   //Declaraing a pointer of type FILE. This declaration is needed for communication between the file and the program.
   FILE *fptr; 

   //Creating a new file named "newprogram.txt" and opening it for writing as per the mode 'w'.
   fptr = fopen("D:\\C_Programs\\BHANUVERMA_163_C_Programs_Repository\\program.txt","w");

   //Checking whether the file is empty? if yes, it will return Error! and exits the file
   {
   if(fptr == NULL) 
      printf("Error!");   
      exit(1);  
   }

   printf("Enter num: ");
   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr); //fclose function is used to close the file

   return 0; //retun function

} // Main function body ends