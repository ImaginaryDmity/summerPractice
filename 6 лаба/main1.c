#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
#include <time.h>

int main(int argc, char const *argv[]) {
  int k = 6, n = 5, count = 0;
  int A[k][n];
  int Sum = 2000000, newSum = 0,cand;
  srand(time(NULL));
  for (size_t i = 0; i < k; i++) {
    for (size_t j = 0; j < n; j++) {
      A[i][j] = rand() % (10 * 10 + 50);
      printf("%3d ",A[i][j]);
    }
    printf("\n");
  }


for (size_t i = 0; i < n; i++) {
  for (size_t j = 0; j < k; j++) {
    newSum += A[j][i];
  }
  if(newSum < Sum){
    Sum = newSum;
    cand = i;
  }
  newSum = 0;
}

printf("\nCandidate number %d got the least votes\n",cand + 1);

  return 0;
}
