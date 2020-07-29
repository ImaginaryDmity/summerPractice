#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10


typedef struct TV{
  char producer[20];
  int size;
  int price;
}tv;

void outTV(tv* tv, int n);

int main(int argc, char const *argv[]) {
  int n;
  printf("Enter number of tvs\n");
  scanf("%d",&n);

  tv tv[n];
  printf("\n");
  for (size_t i = 0; i < n; i++) {
    printf("Enter the producer of tv %d\n",i + 1);
    scanf("%s",&tv[i].producer);
    printf("Enter the size of tv %d\n",i + 1);
    scanf("%d",&tv[i].size);
    printf("Enter the price of tv %d\n",i + 1);
    scanf("%d",&tv[i].price);
    printf("\n");
  }
  printf("__________\n\n");
  outTV(tv,n);
  return 0;
}

void outTV(tv* tv, int n){
  for (size_t i = 0; i < n; i++) {
    if(tv[i].price <= 5500 && tv[i].size >= 17){
      printf("Producer: %s\n",tv[i].producer);
      printf("Size: %d\n",tv[i].size);
      printf("Price: %d\n",tv[i].price);
      printf("\n");
    }
  }
}
