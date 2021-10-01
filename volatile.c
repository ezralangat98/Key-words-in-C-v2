#include <stdio.h>
int main (void)                 
{
// Declaring constant volatile integer variable with assigned value
const volatile int Magic_no = 100 ; 
int *ptr = ( int* ) &Magic_no ;
printf ( "The initial value of the Magic_no is  : %d \n ", Magic_no ) ;
// Changing value using pointer
*ptr = 200 ;  
printf ( "The modified value of the Magic_no is: %d \n ", Magic_no) ;
// Changing value by prompting user to enter their preffered Magic_no
printf("Enter your prefered Magic_no: ");
scanf("%d", *ptr);
printf("Your preferred Magic_no is: ",*ptr);
return 0 ;
}