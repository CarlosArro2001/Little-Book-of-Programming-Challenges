#include <stdio.h>
#include <string.h>

void main(){
  char input[20];
    printf("Do you want to hear a joke? : ");
    scanf("%s", &input);

  if(strcmp(input , "yes")==0){
    printf("\nYou\n");
  }
  if(strcmp(input , "no")==0){
    printf("\nK the joke is you \n");
  }


}
