
#include <stdio.h>
#include <time.h>

int main(){

//variable declaration
int DaysInMon[] = { 31,28,31,30,31,30,31,31,30,31,30,31};
int days , month , year;
char dob[100];
time_t ts;
struct tm *ct;

//entering the date of birth
printf("Please eneter date of birth DD/MM/YYYY : ");
scanf("%d/%d/%d", &days , &month , &year);

ts = time(NULL);
ct = localtime(&ts);

printf("Current Date : %d/%d/%d\n", ct ->tm_mday, ct->tm_mon + 1 , ct->tm_year +1900 );

days = DaysInMon[month-1]-days + 1;

days = days + ct -> tm_mday;
month= (12 - month) + (ct -> tm_mon);
year = (ct -> tm_year + 1900) - year - 1;

printf("\n## Hey you are  %d years old \n", year);

  if(year >= 18 ){
    printf("\nYou can vote\n");
  }
  else{
    printf("\n You are too young to vote \n");
  }

    return 0;


}
