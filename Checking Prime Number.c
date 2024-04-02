#include <stdio.h>
 
int main() {
 
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
 
  // flag to identify prime 
  int isPrime = 1;
 
  // iterating loop from 2 to number - 1
  for (int i = 2; i < number; ++i) {
    if (number % i == 0) {
      isPrime = 0;
      break;
    }
  }
 
  if (isPrime) {
    printf("%d is prime", number);
  }
  else {
    printf("%d is not prime", number);
  }
 
  return 0;
}