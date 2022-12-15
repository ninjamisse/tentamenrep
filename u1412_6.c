// Exercise 6:
/* Print out this drawing using a loop:

  *******
  *  *  *
  *  *  *
  *  *  *
  *******

 */
#include <stdio.h>

int main(){
  char s1[]="    *******";
  char s2[]="    *  *  *";
  int i;
  
  for(i=0;i<5;i++){ // i = index of rows
    if(i==0 || i==4)
      printf("%s\n",s1); // first and last row
    else
    printf("%s\n",s2);
  }
  return 0;
}
