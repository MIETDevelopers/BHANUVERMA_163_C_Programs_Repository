//CHECKING WHETHER THE NUMBER IS EVEN OR ODD.
//Writted by -- BHANU VERMA

#include<stdio.h> //Pre-process directive to include standard header library.
int main(){ //Main function body starting..

	int number; // number variable declaration of integer data type.
	printf("Enter the number: ");
	scanf("%d", &number); //taking number as a input from the user.

	// "%" Modulo operator  -- for checking whether the number is completely divisible by 2 or not.
	if (number % 2 == 0)  
		printf("%d is even. ",number); // if the condition is true. it will print "number" is even.
	else
		printf("%d is odd. ",number); // else. it will print "number" is odd.
	return 0;
}
