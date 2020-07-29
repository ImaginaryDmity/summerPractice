#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//#include <locale.h>
//#include <math.h>
#include <time.h>
#define N 20

typedef struct Team{
  char name[N];
  int score[N];
  int totalscore;
}team;

int main(int argc, char const *argv[]) {
  team team[N];
  strcpy(team[0].name,"Liqui");
  strcpy(team[1].name,"Dignit");
  strcpy(team[2].name,"NaVi");
  strcpy(team[3].name,"Fnatic");
  strcpy(team[4].name,"NIP");
  strcpy(team[5].name,"Titan");
  strcpy(team[6].name,"Mouse");
  strcpy(team[7].name,"Gambit");
  strcpy(team[8].name,"Faze");
  strcpy(team[9].name,"Flipsi");
  strcpy(team[10].name,"SK");
  strcpy(team[11].name,"Astral");
  strcpy(team[12].name,"Vitali");
  strcpy(team[13].name,"ENCE");
  strcpy(team[14].name,"G2");
  strcpy(team[15].name,"MIBR");
  strcpy(team[16].name,"Renega");
  strcpy(team[17].name,"OpTic");
  strcpy(team[18].name,"PRO100");
  strcpy(team[19].name,"North");
  int value;

  srand(time(NULL));
  for (size_t i = 0; i < N; i++) {
    team[i].totalscore = 0;
    for (size_t j = 0; j < N; j++) {
      if(i == j){
        team[i].score[j] = 0;
      }else{
        while((value = rand() % 4) == 2){}
        team[i].score[j] = value;
        team[i].totalscore += value;
      }
    }
  }


  for (size_t i = 0; i < N; i++) {
    printf("%6s ",team[i].name);
    for (size_t j = 0; j < N; j++) {
      printf("%3d ",team[i].score[j]);
    }
    printf("\n");
  }

  int countWin = 0,countLose = 0,counter = 0;
  int wins[20];
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      if(team[i].score[j] == 3) countWin++;
      else if(team[i].score[j] == 0) countLose++;
    }
    if(countWin > countLose){
      wins[counter] = i;
      counter++;
    }
    countWin = 0;
    countLose = 0;
  }
  printf("\n\nTeams that have more wins than loses:\n");
  for (size_t i = 0; i < counter; i++) {
    printf("%s\n",team[wins[i]].name);
  }


  int A[N],B[N];
  for (size_t i = 0; i < N; i++) {
    A[i] = i;
    B[i] = i;
  }
  int tmp;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N - 1; j++) {
      if(team[B[j]].totalscore < team[B[j + 1]].totalscore){
        tmp = B[j];
        B[j] = B[j + 1];
        B[j + 1] = tmp;
      }
    }
  }
  printf("\n\nThe champion of tounament is team %s with score %d",team[B[0]].name,team[B[0]].totalscore);

  for (size_t i = 0; i < N; i++) {
    if(A[i] != B[i]){
      printf("\n\n\n%s is out of place\n",team[i].name);
      break;
    }
  }
  printf("\n\n");
  for (size_t i = 0; i < N; i++) {
    printf("%d) %s with score %d\n",i + 1,team[B[i]].name,team[B[i]].totalscore);
  }
  int withOutLose[20];
  int withOutCount = 0;
  bool check = false;
  counter = 0;
  for (size_t i = 0; i < N; i++) {
    for (size_t j = 0; j < N; j++) {
      if(team[i].score[j] == 0){
        withOutCount++;
      }
      if(withOutCount == 0){
        withOutLose[counter] = i;
        counter++;
        check = true;
      }
    }
  }
  printf("\n\nTeams that don't have loses\n");
  if(check == false){
    printf("There is no a single team that does'n have loses");
  }else{
    for (size_t i = 0; i < counter; i++) {
      printf("%d) %s",i + 1,team[withOutLose[i]].name);
    }
  }
  return 0;
}
