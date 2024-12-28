//
// Created by 1 5 on 12/26/24.
//
#include <stdio.h>

/* This program is used to convert imperial units into metric units
The user inputs and number and the imperial unit and the computer outputs the value
as a metric value. If a symbol isn't recognized the computer returns it back to the user.
 */
int user_units;
int metric_units;
char user_units_format;



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



int main() {
  unitsConverter();
}
