/*
  In this problem, the task is to read a code of a product 1, the number of 
  units of product 1, the price for one unit of product 1, the code of a 
  product 2, the number of units of product 2 and the price for one unit of 
  product 2. After this, calculate and show the amount to be paid.
*/

#include <stdio.h>

int main() {
  int codigoPeca, numeroPecas, i;
  float valorPeca, conta = 0;

  for( i = 0; i < 2; i++ ) {
    scanf( "%d", &codigoPeca );
    scanf( "%d", &numeroPecas );
    scanf( "%f", &valorPeca );

    conta += ( valorPeca * numeroPecas );
  }

  printf( "VALOR A PAGAR: R$ %.2f", conta );
  
  printf( "\n" );

  return 0;
}