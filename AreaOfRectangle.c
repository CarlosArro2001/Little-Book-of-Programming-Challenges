#include <stdio.h>

int main(){

//variable declaration
  int height,width,area;

//user input
  printf("Input the width : \n");
    scanf("%d", &width); //putting the input into the width variable
  printf("Input the height : \n");
    scanf("%d", &height); // putting the input into the height variable

  area = height*width; //calculating the area
  printf("The area is %d ", area); //outputting the area

}
