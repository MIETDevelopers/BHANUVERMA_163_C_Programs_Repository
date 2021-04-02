//PROGRAM TO WRITE .csv FILES.
// Written by -- BHANU VERMA
//30-03-2021

#include <stdio.h> //Pre-Process Directive to Include standard input output header files.
#include <stdlib.h>//Pre-Process Directive to Include standard library header files.
#include <string.h>//re-Process Directive to Include string header files. 

int main() //Main function body starting
{ 
    FILE* fp = fopen("D:\\C_Programs\\BHANUVERMA_163_C_Programs_Repository\\36_WriteCSV.csv", "a+"); //File path.

    char name[50]; 
    int rollno, marks; 

    name == Bhanu;
    rollno == 163;
    marks == 90;

    if (!fp) { 
        // Error in file opening 
        printf("Can't open file\n"); 
        return 0; 
    }

    //Taking input from the user for the new record to be added.   
    printf("\nEnter Student Name\n");  

    printf("\nEnter Roll Number\n"); 

    printf("\nEnter Attendance\n"); 

    // Saving data in file 
    fprintf(fp, "%s, %d, %d\n", name, 
            rollno, marks); 

    printf("\nNew student deatils added."); 

    fclose(fp); 
    return 0; 

} //main function body ends