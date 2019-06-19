
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//function for the card number
int base1(void){
//variable declaration
  int i = 13; //represents the number of cards for each suit
  int k = 0; // will be used for finding the modulus from rand() and variable i
  srand((unsigned)time(NULL)); //will declare the use of producing random integers
  k = rand()% i; //finding the modulus which will get the random element within the array
  return k;
}


//function for the suits
// this function has the same structure as base1
int base2(void){
  //variable declaration
  int z = 4; //represents the number of suit types
  int m = 0;
  srand((unsigned)time(NULL));
  m = rand()% z; ;
  return m;
}
//this the arrays of the suits and card numbers
const char * s[]={"Club","Diamond","Heart","Spades"};
const char * x[]= {"Ace","1","2","3","4","5","6","7","8","10","Jack","Queen","King"};


//this is the main function for printing out the card suit and numbers
int main(){
    printf("%s %s", s[base2()] , x[base1()]);
    return 0;
}
