//Struct creates a data type that can be used to group items of 
//possibly different types into a single type 
#include<stdio.h>
  
//Declaring Struct Employee
struct Employee
{
   int empid, age;
};
//Declaring Struct Adress
struct Adress
{
   int address1, address2;
};

  
int main()
{
   struct Employee John = {0, 50};
   // Examples of initialization using designated initialization
   //It allows structure members to be initialized in any order. 
   struct Employee Aron = {.age = 20, .empid = 101};
   
   // Create an array of structures
   struct Adress empadress[3];
  
   // Access array members
   empadress[0].address1 = 100;
   empadress[0].address2 = 20;
  
   // Accessing members of Employee John
   //Changing the empid of John
   John.empid = 100;
   printf ("John details are: \nEmployee ID = %d \nAge = %d", 
   John.empid, John.age);
   printf ("\nAron's details are: \nEmployee ID = %d \nAge = %d", 
   Aron.empid, Aron.age);
   
   printf("\nJohn's address: %d \n Aron's address: %d", empadress[0].address1, empadress[0].address2);

   return 0;
}