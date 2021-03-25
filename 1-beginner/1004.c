/*
  Read two integer values. After this, calculate the product between them and 
  store the result in a variable named PROD. Print the result like the example 
  below. Do not forget to print the end of line after the result, otherwise 
  you will receive “Presentation Error”.
*/

#include <stdio.h>
 
int main() {
 
  signed int a,b,prod;
  
  scanf("%i",&a);
  scanf("%i",&b);
  
  prod=a*b;
  
  printf("PROD = %i",prod);
  printf("\n");
  
  return 0;
}