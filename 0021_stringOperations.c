//To demonstrate the use of various string operations
//Writted by -- BHANU VERMA
//30-03-2021


#include <stdio.h> //Pre-Process directive to include standard input output functions header file
#include <string.h> //Pre-Process directive to include string input output functions header file
int main() //main function body starting
{
    /* String Declaration*/
    char nickname[20];

    /* Console display using puts */
    puts("Enter your Nick name:");

    /*Input using gets*/
    gets(nickname);

    puts(nickname);

    return 0;

} //main function body ends