/*
  Make a program that reads 3 integer values and present the greatest one 
  followed by the message "eh o maior".
*/

#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, maior;

  scanf("%i %i %i", &a,&b,&c);

  maior = (a + b + abs(a - b)) / 2;
  c > maior ? maior = c : maior;

  printf("%i eh o maior", maior);

  printf("\n");
  
  return 0;
}
