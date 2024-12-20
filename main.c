#include <stdio.h>
#include <math.h>

double celsius;
double fahrenheit;
double sphere;
const double PI = 3.141592653589793;
double r;
double exponent;
double height;
double width;
double perimeter;
double miles;
double kilometers;
int minutes;
int hours;
int total_minutes;
int new_minutes;
int new_hours;
int total_hours;
int more_total_minutes;

void celsius_to_fahrenheit() {
   celsius = 0;
   fahrenheit = (celsius * 9.0/5.0) + (32.0);
   printf("fahrenheit = %fF\n", fahrenheit);
}

void sphere_volume() {
    exponent = 3;
    r = 3;
    sphere = (4.0 / 3.0) * PI * pow(r, exponent);
    printf("sphere volume  = %f\n", sphere);
}

void rectangle_perimeter() {
    height = 2;
    width = 2;
    perimeter = 2.0 * (height + width);
    printf("perimeter = %f\n", perimeter);
}

void kilometers_to_miles () {
    kilometers = 20;
    miles = (kilometers * 0.6213712);
    printf("miles = %f\n", miles);
}

void hours_to_minutes () {
    printf("hours: ");
    scanf("%d", &hours);
    printf("minutes: ");
    scanf("%d", &minutes);

    total_minutes = (hours * 60) + minutes;
    printf("total_minutes = %d\n", total_minutes);
}

void minutes_to_hours () {
    printf("minutes: ");
    scanf("%d", &new_minutes);
    total_hours = (new_minutes / 60);
    more_total_minutes = (new_minutes % 60);
    printf("total_hours = %d hour(s) %d minutes", total_hours, more_total_minutes);
}


int main(void) {
    //celsius_to_fahrenheit();
    //sphere_volume();
    //rectangle_perimeter();
    //kilometers_to_miles();
    //hours_to_minutes();
    minutes_to_hours();
    return 0;
}

