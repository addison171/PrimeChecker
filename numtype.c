/*numtype.c
 *Addison Kuykendall 2/27/19
 *This program has 3 functions, isOdd, isEven, and isPrime. isOdd uses modulus
 *To check if the number is odd, returning 1 it is odd, 0 if it is not.
 * isEven returns the opposite result of isOdd. isPrime returns if the 
 *number is prime by return 0(so not prime) if it is even, or if any numbers
 *between 2 and x/2 have a remainder of 0 when the orginal number is divided.
 */
#include <stdio.h>
int isOdd(int x){
  if(x%2 == 1){
    return 1;
  }
  else{
    return 0;
  }
}
int isEven(int x){
  return !isOdd(x);
}
int isPrime(int x){
  if(isEven(x)){
      return 0;
  }
  else{
    for(int i = 3; i<(x/2); i=i+1){
      if(x%i==0){
	return 0;
      }
    }
    return 1;
  }
}
      
