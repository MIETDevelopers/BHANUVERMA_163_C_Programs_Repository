//Function implementation of binary search of number input by the user in an array.
//Writted by -- BHANU VERMA
//31-03-2021

#include <stdio.h>//Pre Process directive to include standard input output functions header file
int main() // Main function body starting
{
  int c, first, last, middle, n, search, array[100]; //Variable and Array declaration of integer data type

  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  printf("Enter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) { //While loop
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present in the list.\n", search);

  return 0; //Return function of standard library

}// main function body ends