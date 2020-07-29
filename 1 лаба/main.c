#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  float x,y;
  printf("Enter the point A(x:y)\n");
  scanf("%f%f",&x,&y);
  if((x < 0 && y > 0 && y <= x + 1) || (x > 0 && y > 0 && y <= 1 - pow(x,2))){
    printf("Point match this area\n");
  }else{
    printf("Point doesn't match this area\n");
  }
  system("pause");
  return 0;
}
