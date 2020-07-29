#include <stdio.h>
#include <string.h>
#define N 256
#define WORDS 30

int main(int argc, char const *argv[]){
    char delims[] = ",. ";
    char str[N] = "", *ptr = NULL, *word[WORDS] = { NULL };
    int counter = 0, check;

    printf("Enter a string: ");
    if (scanf("%255[^\n]", str) == 1 && fgetc(stdin) == '\n'){
        for (
                ptr = strtok(str, delims);
                ptr != NULL && counter < WORDS;
                counter++, ptr = strtok(NULL, delims)
            ){
            word[counter] = ptr;
        }

        for (size_t i = 0; i < counter; i++){
            check = 0;
            for (size_t j = 0; j < counter; j++){
                if (i != j && strcmp(word[i], word[j]) == 0){
                    check = 1;
                    break;
                }
            }
            if (check == 0) printf("%s\n", word[i]);
        }
    }

    return 0;
}
