#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "bubble.h"
#include "selection.h"
#include "insertion.h"

//Plese choose type of sorting by type
//./sort (type) (list of number)
//for example "./sort bubble 2 1 3"
//type
//1.bubble
//2.insertion
//3.selection


int main(int argc, char **argv){

  int i,N,*a;
  char op[15];
  N=argc-2; 
  a=(int*) malloc(sizeof(int)*N);
  
  printf("argument= %d\n",argc);
  for(i=2;i<argc;i++){
    a[i-2]=atoi(argv[i]);
  }
  strcpy(op, argv[1]);
  //printf("%s",op);
  if (strcmp(op,"bubble")==0) BubbleSort(a,N);
  else if (strcmp(op,"insertion")==0) insertSort(a,N); 
  else if (strcmp(op,"selection")==0) selection(a,N);
  else{
    printf("Bruh what did you input?");
    goto bye;
  }

  printf("Sorted\n");
  for(i=0;i<N;i++) printf("%3d ",a[i]);
bye:
  printf("\n================");
  printf("\n");
}
