#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
#include <math.h>
#include <time.h>
#define N 4
#define M 6

int main(int argc, char const *argv[]) {
  double product = 1;
  int B[N][M];
  float geo;
  srand(time(NULL));
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      B[i][j] = rand() % 9 + 1 ;
      product *= B[i][j];
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }

  geo = pow(product, 1.0 / (N * M));
  printf("\ngeo = %f\n",geo);
  return 0;
}
