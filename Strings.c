//one-dimensional array of characters are called strings, 
//which is terminated by a null character '\0'
//Arrays & strings do not support the assignment operator once it is declared.
#include<stdio.h>

int main ()
{
   //Declaring and initializing strings using arrays
   char name[6] = {'C', 'l', 'o', 'u', 'd', '\0'};
   //Declaring and initializing strings without use of arrays
   char c[50] = "Come here dude!!";


   printf("Tutorials%s\n", name );
   printf("%s",c);
     //Declaring string using arrays
    char name1[30];
    printf("\nEnter name: ");
    //fgets() function reads a string from the user
    fgets(name1, sizeof(name1), stdin);  // read string //stdin is an "input stream", which is an abstract term for something that takes input from the user or from a file. It is an abstraction layer sitting on top of the actual file handling and I/O
    printf("Your name is: ");
    puts(name1);    // Prints / display string
    

   return 0;
}