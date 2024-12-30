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
int referenceyear;
int year0 = 1970;
int month0 = 01;
int day0 = 01;
int referencedays;


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

  if (year1 == year2 && month1 == month2) {
    counter += abs(day2 - day1);
  }

  else if (year1 == year2) {
    if (month1 == 1 || month2 == 1) {
      counter += abs(31 - day1);
      counter += abs(0 + day2);

    }
    else if (month1 == 2 || month2 == 2) {
      counter += abs(28 - day1);
      counter += abs(0 + day2);
    }


  }

















  printf("the counter is : %d days", counter);


}





int main() {
 // unitsConverter();
  dateMath();
}
