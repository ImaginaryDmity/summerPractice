#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
#define N 10

int main(int argc, char const *argv[]) {
  int R[N];
  int max1,max2,max3;
  float geo = 0;
  srand(time(NULL));
  for (size_t i = 0; i < N; i++) {
    R[i] = rand() % 10;
    printf("%d ",R[i]);
  }
  max1 = R[0];
  for (size_t i = 0; i < N; i++) {
    if(R[i] > max1){
      max1 = R[i];
    }
  }
  max2 = R[0];
  for (size_t i = 0; i < N; i++) {
    if(R[i] > max2 && R[i] < max1){
      max2 = R[i];
    }
  }
  max3 = R[0];
  for (size_t i = 0; i < N; i++) {
    if(R[i] > max3 && R[i] < max2){
      max3 = R[i];
    }
  }
  printf("\n%d %d %d\n",max1, max2, max3);
  geo = pow(max1 * max2 * max3, 1.0  / 3);
  printf("Geo = %.2f\n",geo );
  return 0;
}
