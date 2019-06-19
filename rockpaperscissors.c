#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int randChoice(void){
  int i = 3 ;
  int k = 0 ;
  srand((unsigned)time(NULL));
  k = rand()% i ;
  return k;
}

const char * s[]= {"rock","paper","scissor"};

int main(){
  char choice1[20];


  printf("rock , paper , scissors (please type in lower case): ");
  scanf("%s",&choice1);

//if its a tie
  if (choice1 == s[randChoice()]){
    printf("\n %s and %s \n TIE \n" , choice1 , s[randChoice()]);
  }

//if rock is that choice
  if(choice1 == "rock" && s[randChoice()] == "scissor"){
    printf("\n %s and %s \n rock beats scissor you win\n", choice1 , s[randChoice()]);
  }

  if(choice1 == "rock" && s[randChoice()] == "paper"){
    printf("\n %s and %s \n paper beats rock you lose",choice1,s[randChoice()]);
  }

//if paper is the choice
if(choice1 == "paper" && s[randChoice()] == "scissor"){
  printf("\n %s and %s \n scissor beats paper you lose",choice1,s[randChoice()]);
}

if(choice1 == "paper" && s[randChoice()] == "rock"){
  printf("\n %s and %s \n paper beats rock you win",choice1,s[randChoice()]);
}

//if scissor is the choice
if(choice1 == "scissor" && s[randChoice()] == "paper"){
  printf("\n %s and %s \n scissor beats paper you win",choice1,s[randChoice()]);
}

if(choice1 == "scissor" && s[randChoice()] == "rock"){
  printf("\n %s and %s \n rock beats scissor you lose ",choice1,s[randChoice()]);
}

  return 0;
}
