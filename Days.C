/*

  NOTE : THIS IS NOT THE CORRECT ANSWER I SPENT DAYS ON THIS AND I DON'T
         KNOW HOW TO DO THIS PROPERLY

*/
//libaries
#include <stdio.h>
#include <stdlib.h>


int valid_date(int date , int mon , int year);

int main(void){

  //variable declaration
    int day1,mon1,year1,day2,mon2,year2;
    int day_diff, mon_diff, year_diff;

  //user input of the start date
      printf("Enter start date in MM/DD/YYYY : ");
        scanf("%d/%d/%d", &mon1, &day1 , &year1 );
  //user input of the end date
      printf("Enter end date in MM/DD/YYYY : ");
        scanf("%d/%d/%d", &mon2 , &day2 , &year2 );


        if(day2 < day1)
          {
              // borrow days from february
              if (mon2 == 3)
              {
                  //  check whether year is a leap year
                  if ((year2 % 4 == 0 && year2 % 100 != 0) || (year2 % 400 == 0))
                  {
                      day2 += 29;
                  }

                  else
                  {
                      day2 += 28;
                  }
              }

              // borrow days from April or June or September or November
              else if (mon2 == 5 || mon2 == 7 || mon2 == 10 || mon2 == 12)
              {
                 day2 += 30;
              }

              // borrow days from Jan or Mar or May or July or Aug or Oct or Dec
              else
              {
                 day2 += 31;
              }

              mon2 = mon2 - 1;
          }

      if(mon2 < mon1){
        mon2 += 12;
        year2 -=1;
      }

      day_diff = day2 - day1;
      mon_diff = mon2 - mon1;
      year_diff = year2 -year1;

     printf("Difference: %d years %02d months and %02d days.", year_diff, mon_diff, day_diff);

}
