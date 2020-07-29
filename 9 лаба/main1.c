#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
#include <time.h>
//#define N 10

int main(int argc, char const *argv[]) {
  int N = 3, M = 4;
  int positive = 0, negative = 0;
  int **A = (int **)malloc(N*sizeof(int *));
  for(int i = 0; i < N; i++) {
    A[i] = (int *)malloc(M*sizeof(int));
  }

  srand(time(NULL));
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      A[i][j] = -10 + rand() % 20;
      if(A[i][j] > 0){
        positive++;
      }else if(A[i][j] < 0){
        negative++;
      }
      printf("%4d",A[i][j] );
    }
    printf("\n");
  }

  if(negative > positive){
    printf("There are more negative numbers\n");
  }else{
    printf("There are more positive numbers\n");
  }

  for(int i = 0; i < N; i++) {
    free(A[i]);
  }
  free(A);
  return 0;
}
