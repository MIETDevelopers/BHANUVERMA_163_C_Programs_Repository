//function implementation which takes structure as input. 
//Writted by -- BHANU VERMA
//30-03-2021

#include <stdio.h> //Pre Process directive to include standard input output functions header file
#include <string.h> //Pre Process directive to include string header file
 
struct student // Structure body
{
            int id;
            char name[20];
            float percentage;
};
 
void func(struct student record);
 
int main() // Main function body
{
            struct student record;
 
            record.id=1;
            strcpy(record.name, "Raju");
            record.percentage = 86.5;
 
            func(record);
            return 0;
}
 
void func(struct student record)
{
            printf(" Id is: %d \n", record.id);
            printf(" Name is: %s \n", record.name);
            printf(" Percentage is: %f \n", record.percentage);
}