#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
#include <time.h>
//#define N 10

void filling(int **A,int n){
  srand(time(NULL));
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      A[i][j] = -15 + rand() % 30;
      printf("%3d ",A[i][j]);
    }
    printf("\n");
  }
  return;
}

int product(int **A, int n){
  int product = 1;
  for (size_t i = 0; i < n; i++) {
    for (size_t j = 0; j < n; j++) {
      if(A[i][j] > 2 && A[i][j] < 10){
        product *=A[i][j];
      }
    }
  }
  return product;
}

int main(int argc, char const *argv[]) {
  int N;
  printf("N = ");
  scanf("%d",&N);
  int **A = (int **)malloc(N*sizeof(int *));
  for(int i = 0; i < N; i++) {
    A[i] = (int *)malloc(N*sizeof(int));
  }
  filling(A,N);
  printf("\nProduct = %d\n",product(A,N));

  return 0;
}
