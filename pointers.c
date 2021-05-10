#include <stdio.h>  
  
int main( )  
{  
int a = 5;  
int *b;  
b = &a;  //declares value of b as address of a
// as b is the address of a, *b will give the value of a
  
printf ("value of a = %d\n", a);  
printf ("value of a = %d\n", *(&a));  //&a gives address, * to that location returns value of a
printf ("value of a = %d\n", *b);  // as b = &a, *b = *(&a) = a
printf ("address of a = %u\n", &a);  
printf ("address of a = %d\n", b);  
printf ("address of b = %u\n", &b);  
printf ("value of b = address of a = %u", b);  
return 0;  
}  