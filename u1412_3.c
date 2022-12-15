// Exercise 3:
/* Using a while loop print 50 natural numbers separated by a tabulator.
   And a new line after 10, 20, 30, 40 and 50. */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> 

int main(){
  int i;
  i=1;
  
  printf("OUTPUT\n");

  while(i<=50){
    printf("%d\t",i);
    if(i%10 == 0) puts("");
    i++;
  }
  
  return 0;
}
