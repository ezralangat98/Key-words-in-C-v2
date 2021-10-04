#include <stdio.h>
#include <string.h>
//Can be use to give a type a new name
typedef unsigned char BYTE;
BYTE  b1[100], b2;
//Typedef can also be used to gives a name to the user defined data types
//Below it defines a new data type and then use that data type to define 
//structure variables directly
typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   char editor[100];
   int book_id;
} Book;
 
int main( ) {

   Book book;
 
   strcpy( book.title, "C Programming");
   strcpy( book.author, "Nuha Ali"); 
   strcpy( book.subject, "C Programming Tutorial");
   book.book_id = 6495407;
   BYTE b1[100] = "This is so cool!";
 
   printf( "Book title : %s\n", book.title);
   printf( "Book author : %s\n", book.author);
   printf( "Book subject : %s\n", book.subject);
   printf( "Book book_id : %d\n", book.book_id);
   printf("%s", b1);

   return 0;
}