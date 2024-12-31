//
// Created by 1 5 on 12/26/24.
//
#include <stdio.h>
#include <stdlib.h>

/* This program is used to convert imperial units into metric units
The user inputs and number and the imperial unit and the computer outputs the value
as a metric value. If a symbol isn't recognized the computer returns it back to the user.
 */
int user_units;
int metric_units;
char user_units_format;
int year1;
int month1;
int day1;
int year2;
int month2;
int day2;
int counter;
int counter1;
int totalDays;
int numberofDays;
int currentMonth;
int years;
float dollars;
float newDollars;
int nums;
int num;

void unitsConverter () {
  printf("Enter number of units: ");
  scanf("%d %c", &user_units, &user_units_format);

  //chapter 7 comeback to this need a way to parse for inches as well (or text input in general)
  if (user_units_format == 'i') {
    metric_units = (user_units * 2.54);
    printf("The metric units are %d centimeters", metric_units);
  }

  else if (user_units_format == 'f') {
    metric_units = (user_units * 0.3048);
    printf("the metric units are %d meters", metric_units);
  }

  else if (user_units_format == 'g') {
    metric_units = (user_units * 3.78541);
    printf("the metric units are %d liters", metric_units);
  }

  else {
    printf("Invalid input");
  }
}

/***********************************************************
 *   Ok so this code works it's very odd though this is wh
 *   at I will say...Only enter dates after Jan 1, 2000
 *   the format matters too so any date after this date
 *   in this format:
 *                      (2000/01/01)
 *    Also this doesn't count for leap days/years and i
 *     think that is the reason it is starting to lose      *
 *   it's accuracy after you move at a larger distance      *
 *    between years but if you stay within these parameters *
 *     the program should work fine albeit those issues     *
 *    not the perfect program, but I did spend some time     *
 *    programming and debugging this                        *
 *       VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV        *
 ************************************************************/
void dateMath() {
  printf("enter a 1st date in YYYY/MM/DD format :");
  scanf("%d/%d/%d", &year1, &month1, &day1);
  printf("enter a 2nd date in YYYY/MM/DD format :");
  scanf("%d/%d/%d", &year2, &month2, &day2);



  counter = 0;
  counter1 = 0;

  //this was the simplest logic if the years and months were the same
  if (year1 == year2 && month1 == month2) {
    counter += abs(day2 - day1);
  }

  if (year1 < year2) {
    years = year1;
    while (years < year2) {
      counter += 365;
      ++years;
    }

    if (year1 < year2 && month2 > month1) {
      if (month1 == 1 || month2 == 1) {
        counter += (31 - day1) + (day2);
      }
      else if (month1 == 2 || month2 == 2) {
        counter += (28 - day1) + (day2);
      }
      else if (month1 == 3 || month2 == 3) {
        counter += (31 - day1) + (day2);
      }
      else if (month1 == 4 || month2 == 4) {
        counter += (30 - day1) + (day2);
      }
      else if (month1 == 5 || month2 == 5) {
        counter += (31 - day1) + (day2);
      }
      else if (month1 == 6 || month2 == 6) {
        counter += (30 - day1) + (day2);
      }
      else if (month1 == 7 || month2 == 7) {
        counter += (31 - day1) + (day2);
      }
      else if (month1 == 8 || month2 == 8) {
        counter += (31 - day1) + (day2);
      }
      else if (month1 == 9 || month2 == 9) {
        counter += (30 - day1) + (day2);
      }
      else if (month1 == 10 || month2 == 10) {
        counter += (31 - day1) + (day2);
      }
      else if (month1 == 11 || month2 == 11) {
        counter += (30 - day1) + (day2);
      }
      else if (month1 == 12 || month2 == 12) {
        counter += (31 - day1) + (day2);
      }
    }
    currentMonth = month1 + 1;
    while (currentMonth < month2) {
      if (currentMonth == 1 || currentMonth == 3 || currentMonth == 5 || currentMonth == 7 || currentMonth == 8 || currentMonth == 10 || currentMonth == 12) {
        counter1 += 31;
        ++currentMonth;
      }
      else if (currentMonth == 4 || currentMonth == 6 || currentMonth == 9 || currentMonth == 11) {
        counter1 += 30;
        ++currentMonth;
      }
      else {
        counter1 += 28;
        ++currentMonth;
      }
    }


  }

  //this is the logic to handle the use cases for the edge months or months that weren't
  //fully complete


  //this does count the months that were fully complete and put them into
  //a while loop to check for the amount of days for each month


  //this combines both the unfinished months and the fininshed months to get the results
totalDays = counter + counter1;
  printf("the counter is : %d days", totalDays);

}

//this program enters a given amount and applies an 8% sales tax to the given amount
//
//
//
void dollarTax () {
  printf("enter a change amount: ");
  scanf("%f", &dollars);


  if (dollars >= 1) {
    newDollars = dollars *  1.08;
  }
  else {
    newDollars = dollars;
  }


  printf("the total amount of change is  %.2f", newDollars);
}


//this program prints all prime numbers from 0-100
//pretty straightforward this one was
void numbernotPrime() {
  nums = 2;
  while (nums <= 100) {
    if (nums % 2 == 0 && nums != 2 ) {
      //printf("%d\n", nums);
    }

    else if (nums % 3 == 0 && nums != 3) {
      //printf("%d\n", nums);
    }
    else if (nums % 5 == 0 && nums != 5) {
      //printf("%d\n", nums);
    }
    else if (nums % 7 == 0 && nums != 7) {
      //printf("%d\n", nums);
    }
    else {
      printf("%d\n", nums);
    }
    ++nums;
  }

}

int main() {
 // unitsConverter();
  //dateMath();
  //dollarTax();
  numbernotPrime();
}
