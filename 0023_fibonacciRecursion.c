// Fibonacci sequence using recursion
// Written by -- BHANU VERMA
// 30-03-2021

#include<stdio.h> //Pre-Process directive to include input output functions header file.
void printFibonacci(int n){   
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         printFibonacci(n-1);    
    }    
}    
int main(){  //main function body starting  
    int n;    
    printf("Enter the number of elements: ");    
    scanf("%d",&n);    

    printf("Fibonacci Series: ");    
    printf("%d %d ",0,1);    
    printFibonacci(n-2);//n-2 because 2 numbers are already printed    

  return 0; // Return function of standard library

 }   // main function body ends