/*
  Exercise 7
 
  1) Ask the user to enter a number.
  2) Using a for loop print out the multiplication table of the number.

*/

#include <stdio.h>

int main(){
  int n, i;
  printf("Enter a number for a multiplication table:");
  scanf("%d",&n);

  for(i=1;i<=10;i++){
    printf("%d * %d = %d\n",n,i,n*i);
  }
  
  return 0;
}
