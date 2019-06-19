#include <stdio.h>

int main(){

  //variable declaration
    int num , i;

  //user input in num variable
    printf("Please enter a number : ");
    scanf("%d", &num);

  //for loop for printing the factors unitl it reaches maximum value which is num variable
  // and it skips any number which doesn't have a modulus of 0
    for(i=1 ; i <= num ; i++){
      if (num % i == 0 )
      {
        printf("\n%d\n", i);
      }
      else{
        continue;
      }
    }
    return 0;
  }
