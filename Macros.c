//A macro is a segment of code which is replaced by the value of macro
//Example of predefined macros are:
#include<stdio.h> 
#define city_address 20332 
 int main(){  

   printf("The city's address is: %d\n", city_address);
   printf("Examples of inbult macros are: \n");  
   printf("File :%s\n", __FILE__ );    
   printf("Date :%s\n", __DATE__ );    
   printf("Time :%s\n", __TIME__ );    
   printf("Line :%d\n", __LINE__ );    
   printf("STDC :%d\n", __STDC__ );      
   return 0;  
 }   

 //Function-like Macros: #define MIN(a,b) ((a)<(b)?(a):(b))     