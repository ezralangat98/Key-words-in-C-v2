#include <stdio.h>  
 enum productprice{eggs=100, rice, beans, chicken, meat};  
int main()  
{  
// printing the values of months
 printf("product prices are: ");  
 for(int i=eggs;i<=meat;i++)  
 {  
 printf("%d, ",i);  
 }  
    return 0;  
}  