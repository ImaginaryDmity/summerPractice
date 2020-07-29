#include <stdlib.h>
#include <stdio.h>
#define N 3
#define M 7

int main(int argc, char const *argv[]) {
  int U[N][M];
  int buff = 0, max = 0,Imax, Jmax;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      U[i][j] = rand() % 10;
      printf("%d ",U[i][j]);
    }
    printf("\n");
  }

  printf("\n");
  for (size_t i = 0; i < M; i++) {
    max = U[0][i];
    Imax = i;
    Jmax = 0;
    for (size_t j = 0; j < N; j++) {
      if(U[j][i] > max){              
        max = U[j][i];
        Imax = i;
        Jmax = j;
      }
    }
    buff = U[0][i];
    U[0][i] = U[Jmax][Imax];
    U[Jmax][Imax] = buff;
  }

  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < M; j++) {
      printf("%d ",U[i][j]);
    }
    printf("\n");
  }
  return 0;
}
