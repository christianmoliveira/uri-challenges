#include <stdio.h>
/*
  Read two integer values, in this case, the variables A and B. After this, 
  calculate the sum between them and assign it to the variable SOMA. Write 
  the value of this variable.
*/
int main() {
 
  signed int a,b,soma;
  
  scanf("%i",&a);
  scanf("%i",&b);
  
  soma=a+b;
  
  printf("SOMA = %i",soma);
  printf("\n");

  return 0;
}