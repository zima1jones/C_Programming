//
// Created by 1 5 on 12/26/24.
//
#include <stdio.h>

/* This program is used to convert imperial units into metric units
The user inputs and number and the imperial unit and the computer outputs the value
as a metric value. If a symbol isn't recognized the computer reutrns it back to the user.
 */
int user_units;
int metric_units;
int user_units_format;



void unitsConverter () {
  printf("Enter number of units: ");
  scanf("%d %c", &user_units, &user_units_format);

  //chatper 7 comeback to this need a way to parse for inches as well (or text input in general)
  if (user_units > 0) {
    metric_units = (user_units * 2.54);
    printf("The metric units are %d centimeters", metric_units);
  }
}



int main() {
  unitsConverter();
}
