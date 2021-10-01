//Enum is user defined keyword in C programming
//It is used to assign names to the integral constants 
//Makes a program easy to read and maintain
#include<stdio.h>
//Declaring and initializing Enum city_address
enum city_address{
    Nairobi = 0100, 
    Mombasa = 0200, 
    Texas = 3023,
    Ohio = 1000,
    Alabama = 9010
    };

int main() {
   // variable declaration of city_address
   enum city_address V1;
   //Assigning value of Ohio to V1
   V1 = Ohio;
   printf("The addresses of the cities are: \nNairobi: %d\t Mombasa: %d\t Texas: %d\t Ohio: %d\n\n", 
   Nairobi, Mombasa, Texas, V1);
   
   // variable declaration of city_address
   enum city_address a;
   //Assigning value of Alabama to a
   a = Alabama;

   switch (a)
   {
   case Nairobi:
       printf ("The City code for Nairobi is: 0100");
       break;

   case Mombasa:
       printf ("The City code for Mombasa is: 0200");
       break;
   
   case Alabama:
       printf ("The City code for Alabama is: 90100");
       break;
   }
   
   
   return 0;
}