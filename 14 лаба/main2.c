#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
//#include <time.h>
//#define N 10

int main(int argc, char const *argv[]) {
  FILE *fp,*fp2;
  char ch;
  int N = 3;
  char lol[50];
  char fileName[20] = "file.txt";
  char answerName[20] = "answer.txt";

  printf("Enter the of file: ");
  scanf("%s",&fileName);
  printf("Enter how many string will be there: ");
  scanf("%d",&N);
  printf("Enter the name of answer file: ");
  scanf("%s",&answerName);

 if ((fp = fopen(fileName, "w")) == NULL)
  {
    printf("Error...");
    return 0;
  }
  char buffer[50];
  for (size_t i = 0; i < N; i++) {
    fflush(stdin);
    gets(buffer);
    fprintf(fp, "%s \n",buffer);

  }
  fclose(fp);
 if ((fp = fopen(fileName,"r")) == NULL)
  {
    printf("Error...");
    return 0;
  }
  if ((fp2 = fopen(answerName,"w")) == NULL)
   {
     printf("Error...");
     return 0;
   }

   rewind(fp);
   fgets(lol,49,fp);
   while (!feof(fp)){
     char *ch = strtok(lol," ");
     while(ch != NULL){
       if((ch[0] == 'a') || (ch[0] == 'b') || (ch[0] == 'c') || (ch[0] =='d') || (ch[0] =='e')){
         fputs(ch,fp2);
         fputs(" ",fp2);

       }
       ch = strtok (NULL, " ");
     }
     fprintf(fp2, "\n");
     fgets(lol,49,fp);

   }

  fclose(fp);
  fclose(fp2);
  return 0;
}
