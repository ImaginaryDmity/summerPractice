#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int N,M;
  printf("Enter N and M\n");
  scanf("%d%d",&N,&M);

  int A[N][M];
  int k = 0, p = 2, buff;
  printf("Enter k and p\n");
  scanf("%d%d",&k,&p);
  srand(time(NULL));
  printf("first\n");
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      A[i][j] = rand() % 10;
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  for (size_t i = 0; i < N; i++) {
    buff = A[i][k];
    A[i][k] = A[i][p];
    A[i][p] = buff;
  }
  printf("\nswapped\n");
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      printf("%d ",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
