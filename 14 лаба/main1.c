#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

int main(int argc, char const *argv[]) {
  char probil[] = "Probil";
  char S[] = "Programming and computing";

  int counter = 0;
  for (size_t i = 0; i < strlen(S); i++) {
    if(S[i] == ' '){
      counter++;
    }
  }
  int n = (counter * strlen(probil)) + (strlen(S) - counter);
  char newS[n];
  memset(newS, '\0', sizeof(newS));
  int newCounter = 0;
  for (size_t i = 0; i < strlen(S); i++) {
    if(S[i] != ' '){
      newS[newCounter] = S[i];
      newCounter++;
    }else{
      strcat(newS,probil);
      newCounter += strlen(probil);
    }
  }
  strcpy(S,newS);
  printf("%s\n",S);
  return 0;
}
