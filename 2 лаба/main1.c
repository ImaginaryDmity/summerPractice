#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
#define N 9

int main(int argc, char const *argv[]) {
  int R[N], P[N];
  srand(time(NULL));
  printf("Array: R\n");
  for (size_t i = 0; i < N; i++) {
    R[i] = rand() % 10;
    printf("%d ",R[i]);
  }
  printf("\nArray: P\n");
  for (size_t i = 0; i < N; i++) {
    P[i] = R[N - i - 1];
    printf("%d ",P[i]);
  }
  return 0;
}
