#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

void volume(int a, int b, int c){
  printf("V = %d",a * b * c);
}
void area(int a, int b, int c){
  printf("S = %d", 2 * (a * b + a * c + b * c));
}

int main(int argc, char const *argv[]) {
  int a = 4, b = 3, c = 8;
  printf("Enter 3 numbers\n");
  scanf("%d%d%d",&a,&b,&c);
  volume(a,b,c);
  printf("\n");
  area(a,b,c);
  return 0;
}
