/*Main.c
 * Addison Kuykendall 2/27/19
 * This program has the user enter a postiive integer than calls isPrime to
 * check if it is prime and informs the user the answer. The commented out
 * code is from part 1 where it informs the reader if it is even or odd
*/
#include <stdio.h>
#include "numtype.h"
int main(){
  printf("Enter a positive integer\n");
  int y;
  scanf("%d", &y);
  if(isPrime(y)){
    printf("%d is a prime number\n", y);
  }
  else{
    printf("%d is not a prime number\n", y);
  }
}
      /*
  if(isOdd(y)){
    printf("The number %d is odd\n", y);
  }
  else if(isEven(y)){
    printf("The number %d is even\n", y);
  }
  else{
    printf("The number %d is neither even nor odd\n", y);
   } 
}*/

