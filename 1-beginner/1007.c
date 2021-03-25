/*
  Read four integer values named A, B, C and D. Calculate and print the 
  difference of product A and B by the product of C and D (A * B - C * D).
*/

#include <stdio.h>

int main() {
  signed int a, b, c, d, diferenca;

  scanf( "%d%d%d%d", &a, &b, &c, &d );

  diferenca = (a * b - c * d );

  printf( "DIFERENCA = %d", diferenca );

  printf( "\n" ); 

  return 0;
}