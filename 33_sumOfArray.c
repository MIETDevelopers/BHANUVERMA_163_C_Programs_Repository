// SUM OF ELEMENTS OF ARRAY
// Written by -- BHANU VERMA
//30-03-2021

#include <stdio.h> //Pre-Process directive to include standard input output header file
#define MAX_SIZE 100

int main() //main function body starting
{
    int arr[MAX_SIZE];
    int i, n, sum=0;

    //Input size of the array
    printf("Enter size of the array: ");
    scanf("%d", &n);

    //Input elements in array
    printf("Enter %d elements in the array: ", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //Add each array element to sum
    for(i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    //Printing the Sum of all elements of array
    printf("Sum of all elements of array = %d", sum); 

    return 0;
}