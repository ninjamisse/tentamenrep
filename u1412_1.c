/*
  Exercise 1: Malloc and Calloc

  1) Ask a user the size of an array of integer.
  2) Allocate the array with help of malloc/calloc.
  3) Initialize each element of the array to a random number between 1 and 100.
  4) Define a function linearsearch that find a given number in the
     array and return its index.
  5) Print the index of the given number if it exists in the array.

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int linearsearch(int,int *,int); // linearsearch(<size of the array>,<array>,<key>)

int linearsearch(int m,int *b,int k){ // linearsearch searches through one element at the thime in the list
  int i,index;
  for(i=0;i<m;i++)
    if(b[i] == k)
      return i;

  return -1; //If key was not found in array
}

int main(){
  int i,*arr,n,key;
    
  printf("Choose the lenght of an array: \n");
  scanf("%d",&n); //Don't forget to add & to get adress for the user input

  //  a=(int*)malloc(n*sizeof(int));
  // Cast a void * to int *
 //Malocte amount of bytes coinciding with size of integer array

  arr=(int*)calloc(n,sizeof(int));
   
  // Initialize the array
  /*for(i=0;i<n;i++)
    arr[i]=rand()%100 + 1;
  */
    
  for(i=0;1<n;i++)
    printf("%d",arr[i]);
  puts("");
  
  printf("Enter number to be searched: ");
  scanf("%d",&key);

  if(linearsearch(n,arr,key) == -1)
    printf("The number %d is not present in the array\n",key);
  else
    printf("The number %d was found at index %d\n",key,linearsearch(n,arr,key));
 
  free(arr); //Do not forget to free memory when using malloc or calloc, otherwise you might get a memory leak
  
  return 0;
}
