#include <stdlib.h>
#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

typedef struct Cars{
  char name[40];
  int speed;
}cars;

void out(cars* car){
  for (size_t i = 0; i < 20; i++) {
    if(car[i].speed > 180){
      printf("%s\n",car[i].name);
    }
  }
  return;
}

int main(int argc, char const *argv[]) {
  cars car[20];
  strcpy(car[0].name,"Porche 911"); car[0].speed = 220;
  strcpy(car[1].name,"Porche Panamera"); car[1].speed = 190;
  strcpy(car[2].name,"Porche Cayene"); car[2].speed = 180;
  strcpy(car[3].name , "Mercedes-Benz ML350"); car[3].speed = 140;
  strcpy(car[4].name , "Mercedes-Benz SLS"); car[4].speed = 250;
  strcpy(car[5].name , "Mercedes-Benz AMG"); car[5].speed = 260;
  strcpy(car[6].name , "Mercedes-Benz GLE"); car[6].speed = 185;
  strcpy(car[7].name , "BMW X5"); car[7].speed = 156;
  strcpy(car[8].name , "BMW X6"); car[8].speed = 200;
  strcpy(car[9].name , "BMW 5"); car[9].speed = 240;
  strcpy(car[10].name , "BMW M5"); car[10].speed = 140;
  strcpy(car[11].name , "BMW M3"); car[11].speed = 165;
  strcpy(car[12].name , "Bugatti Veynore"); car[12].speed = 300;
  strcpy(car[13].name , "Bugatti Chirone"); car[13].speed = 310;
  strcpy(car[14].name , "Lamborghini Aventador"); car[14].speed = 290;
  strcpy(car[15].name , "Lamborghini Murcielago"); car[15].speed = 255;
  strcpy(car[16].name , "Audi R8"); car[16].speed = 280;
  strcpy(car[17].name , "Audi A7"); car[17].speed = 120;
  strcpy(car[18].name , "Audi A5"); car[18].speed = 100;
  strcpy(car[19].name , "Ford Mustang"); car[19].speed = 169;
  printf("Cars  that have speed more than 180 km/h:\n");
  out(car);

  return 0;
}
