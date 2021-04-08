//To demonstrate the use of malloc(), calloc() and free() functions
//writted by -- BHANU VERMA
//1-04-2021


#include <stdio.h> //Pre Process directive to include standard input output functions header file
#include <stdlib.h> //Pre Process directive to include standard library functions header file

int main() { //main function body starting
  
    // This pointer will hold the base address of the block created
    int* ptr;
    int n, i;
  
    // Get the number of elements for the array
    n = 5;
    printf("Enter number of elements: %d\n", n);
  
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
  
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
  
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
  
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }
  
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
  
    return 0;
} //main function body ends