// skeleton

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h> // Don't forget to comåile with flag -lm
//T.ex. gcc -o prog code.c -lm

/*Declaration of a function "foo" returning a floating-point
  and taking two arguments; a floating point, and an integer. */

float foo(float,int);

//Definition (logic) of foo
float foo(float f, int n){
  float result;

  result=(float)n*f; //typecasting
  
  return result;
};

int main(int argc, char **argv){ //char *argv[]
  //Declaration of variables
  int i=2,j;
  float x=1.234,y,z;
  double d,e,f;
  char c;
  char str[]="Richie"; //A C-string

  //There is no string datatype in C!
  //Don't write string str (only in C++);
  
  char str2[10]; //also *str3=NULL;

  //You cannot write:
  //str2="Richie"; (only in C++)
  
  strcpy(str2,"Richie");
  printf("str2=%s\n",str2);
  //Or:
  strcpy(str2,str);
  printf("str2=%s\n",str2);
  //Same output
  
  y=foo(x,5);

  // Print on the screen %d (int), %f (float/double), %c (one char), %s (string)
  printf("y=%f\n",y);
  printf("x=%f\n",x);
  return 0;
}
