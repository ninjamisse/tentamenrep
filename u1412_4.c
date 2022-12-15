// Exercise 4:
/*
1) Ask the user to enter a number.
2) Count the number of digits in the number.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
  int n,count=0;
  
  printf("Enter a number: ");
  scanf("%d",&n); // call by reference

  // count amount of digits
  while(n!=0){
    n=n/10; // The key to the algorithm
    count++;
  }
  printf("Count of digits=%d\n",count);
  
  return 0;
}
