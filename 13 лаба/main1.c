#include <stdlib.h>
#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[]) {
    FILE *fp;
    char ch;
    int rightCounter = 0, n;
    if ((fp = fopen("numbers.txt", "r+")) == NULL)
    {
        printf("Не удалось открыть файл");
        return 0;
    }
    int counter = 0;

    while((ch = fgetc(fp)) != EOF){
        counter++;
    }

    rewind(fp);
    int A[counter];
    counter = -1;

    while((ch = fgetc(fp)) != EOF){
        counter++;
        A[counter] = atoi(&ch);
        if(counter % 2 != 0 && A[counter] % 2 == 0){
            rightCounter++;
        }
    }
    for (int i = 0; i < counter; ++i) {
        A[i] %= 10;
    }
    n = counter + rightCounter;
    int B[n];
    int c = 0;
    for (size_t i = 0; i < counter; i++) {
        B[c] = A[i];
        if(i % 2 != 0 && A[i] % 2 == 0){
            B[c + 1] = A[i];
            c++;
        }
        c++;
    }
    fprintf(fp,"\n");
    for (size_t i = 0; i < c; i++) {
        fprintf(fp,"%d",B[i]);
    }
    fclose(fp);
    return 0;
}
