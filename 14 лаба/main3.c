#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

int main(int argc, char const *argv[]) {
    char string[100];
    printf("Enter a string: ");
    gets(string);
    char *ch;
    printf("Words that end with \"ing\", \"ed\" and \"less\": ");
    ch = strtok(string," ");
    while(ch != NULL){
        if(((ch[strlen(ch) - 1]) == 'd' && (ch[strlen(ch) - 2]) == 'e') || ((ch[strlen(ch) - 1]) == 'g' && (ch[strlen(ch) - 2]) == 'n' && ch[strlen(ch) - 3] == 'i') || ((ch[strlen(ch) - 1]) == 's' && (ch[strlen(ch) - 2]) == 's' && (ch[strlen(ch) - 3]) == 'e' && (ch[strlen(ch) - 4]) == 'l')){
            printf("%s  ",ch);
        }
        ch = strtok(NULL," ");
    }
    return 0;
}
