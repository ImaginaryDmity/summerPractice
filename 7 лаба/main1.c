#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
#include <math.h>
#include <time.h>
//#define N 10

void filling (int A[], int n){
  srand(time(NULL));
  for (size_t i = 0; i < n; i++) {
    A[i] = rand() % 10;
  }
  return;
}

int module(int A[],int n){
  int max = A[0];
  for (size_t i = 0; i < n; i++) {
    if(A[i] > max){
      max = A[i];
    }
  }
  return abs(max - A[n - 1]);
}


int main(int argc, char const *argv[]) {
  int n;
  printf("N = ");
  scanf("%d",&n);

  int array[n];
  filling(array,n);
  for (size_t i = 0; i < n; i++) {
    printf("%d ",array[i]);
  }
  printf("\n%d",module(array,n));
  return 0;
}
