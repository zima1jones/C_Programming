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

void dateMath() {
  printf("enter a 1st date in YYYY/MM/DD format :");
  scanf("%d/%d/%d", &year1, &month1, &day1);
  printf("enter a 2nd date in YYYY/MM/DD format :");
  scanf("%d/%d/%d", &year2, &month2, &day2);



  counter = 0;
  counter1 = 0;

  if (year1 == year2 && month1 == month2) {
    counter += abs(day2 - day1);
  }

  else if (year1 == year2 && month2 > month1) {
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

totalDays = counter + counter1;
  printf("the counter is : %d days", totalDays);

}

int main() {
 // unitsConverter();
  dateMath();
}
