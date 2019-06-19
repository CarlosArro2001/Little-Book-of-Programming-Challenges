#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int startNum , input , randNum;
  srand((unsigned)time(NULL));
  //randNum = rand() % 10;
  printf("Please enter a random number above 10 : ");
  scanf("%d", &startNum);
  printf("%d", startNum);

  do {
    printf("How many do you want to remove? : ");
    scanf("%d", &input)
    startNum -= input;
    printf("\n%d\n", startNum);
    if( startNum <= 0 ){
      printf("\n Human player wins \n");
    }
    randNum = rand() % 10;
    printf("%d", randNum);
    startNum -= randNum ;
    printf("%d",startNum);
    if(startNum <= 0 ){
      printf("\n Computer player wins \n");
    }

  } while(startNum > 0  );
  return 0 ;


}
