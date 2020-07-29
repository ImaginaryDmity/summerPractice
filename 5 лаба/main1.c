#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

int main(int argc, char const *argv[]) {
  int n = 6,count = 0;
  int A[6] = {31, 31, 2, 0, 31, 2};

  for (size_t i = 0; i < n; i++) {
    printf("%d ",*(A + i));
  }

  for (size_t i = 0; i < n; i++) {
    if(*(A + i) % 2 == 0){
      count++;
    }
  }

  for (size_t i = 0; i < 2; i++) {
    for (size_t j = 0; j < n; j++) {
      if(*(A + j) % 2 == 0){
        for (size_t k = j; k < n; k++) {
          *(A + k) = *(A + k + 1);
        }
      }
    }
  }
printf("\n");
  for (size_t i = 0; i < n - count; i++) {
    printf("%d ",*(A + i));
  }
  return 0;
}
