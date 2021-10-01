//Union is user defined type
//Structures allocate enough space to store all their members
//Unions can only hold one member value at a time.
#include <stdio.h>
union unionJob
{
   //Defining a union
   char name[32];
   float salary;
   int workerNo;
} uJob;
//Defining a Struct
struct structJob
{
   char name[32];
   float salary;
   int workerNo;
} sJob;

int main()
{
   //Printing amount of memory allocated to that data types
   printf("size of union = %d bytes", sizeof(uJob));
   printf("\nsize of structure = %d bytes", sizeof(sJob));

   union unionJob aron;
   strcpy( aron.name, "Aron Holman");
   printf( "\n\nEmployee Name: %s\n", aron.name);
   aron.salary = 100000.0;
   printf("\nAron's Salary: %f", aron.salary);

   

   return 0;
}