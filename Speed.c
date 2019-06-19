#include <stdio.h>

int main(){

  //variable declaration
  int distance , time, speed ;

  //user input
  printf("Enter distance in km : \n "); //input distance
    scanf("%d" , &distance); //storing the input inside the distance variable

  printf("Enter time in minutes : \n "); //input time
    scanf("%d", &time); //storing the input inside the time variable

  speed = distance/time;  //speed calculation
  printf("%d", speed ); //outputting the speed
}
