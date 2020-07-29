#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

int main(int argc, char const *argv[]) {
  char string[50];
  gets(string);
  int countA = 0, length;
  bool check = false;
  char *istr;
  length = strlen(string);
  for (size_t i = 0; i < length; i++) {
    if(string[i] == 'a'){
      countA++;
    }
  }
  printf("A = %d, len = %d\n",countA, length);

  for (size_t i = 0; i < length; i++) {
    if(string[i] == ' '){
      if(string[i + 1] == 'M'){
        check = true;
      }
    }
  }
  if(check == true){
    printf("There is at least one word in the line that begins with \'M\'\n");
  }else{
    printf("There is not a single word in the line that begins with \'M\'\n");
  }

  if(strpbrk(string,"M")){
    printf("There is at least one word in the line that begins with \'M\'\n");
  }else{
    printf("There is not a single word in the line that begins with \'M\'\n");
  }
  return 0;
}
