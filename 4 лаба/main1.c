#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
#include <time.h>
#define N 5
#define M 25

int main(int argc, char const *argv[]) {
  int V[N][N], A[N * N];
  int count = 0;
  srand(time(NULL));
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      V[i][j] = rand() % 10;
      printf("%d ",V[i][j]);
      A[count] = V[i][j];
      count++;
    }
    printf("\n");
  }
  printf("\nFinal array\n");
  for (size_t i = 0; i < (N * N); i++) {
    printf("%d ",A[i]);
  }
  return 0;
}
