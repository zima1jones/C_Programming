#include <stdio.h>

int distance1;
int distance2;
int totalDistance;
int grade;
int total;
int quarters;
int dimes;
int nickels;
int pennies;
int change;
int next_num;
int year;
int employeeHours;
int wage;
int weekly_pay;
int overtime_wage;
int total_pay;
int overtime_hours;

void findDistance() {
    distance1 = 30;
    distance2 = 10;

    totalDistance = ((distance1 + distance2)*(distance1+distance2));
    printf("the total distance is %d\n", totalDistance);
}

void findGrades () {
    grade = 99;

    if (grade <= 60) {
        printf("the grade is %d\n and you have an F!", grade);
    }


//you are on exercise 6-3 find a way to get the dashes and crosses placed here
//these are for the grades with a D!
    if (grade >= 61 && grade <= 70) {
        if (grade <= 63) {
            printf("the grade is %d - and you have a D-!", grade);
        }
        else if (grade >= 68 && grade <= 70) {
            printf("the grade is %d and you have have a D+!", grade);
        }
        else {
            printf("the grade is %d - and you have a D!", grade);
        }
    }
//these are for grades with a C!
    if (grade >= 71 && grade <= 80) {
        if (grade <= 73) {
            printf("the grade is %d - and you have a C-!", grade);
        }
        else if (grade >= 78 && grade <= 80) {
            printf("the grade is %d and you have have a C+!", grade);
        }
        else {
            printf("the grade is %d - and you have a C!", grade);
        }

    }
    if (grade >= 81 && grade <= 90) {
        if (grade <= 83) {
            printf("the grade is %d - and you have a B-!", grade);
        }
        else if (grade >= 88 && grade <= 90) {
            printf("the grade is %d and you have have a B+!", grade);
        }
        else {
            printf("the grade is %d - and you have a B!", grade);
        }

    }
    if (grade >= 91) {
        if (grade <= 93) {
            printf("the grade is %d - and you have a A-!", grade);
        }
        else if (grade >= 98 && grade <= 100) {
            printf("the grade is %d and you have have a A+!", grade);
        }
        else {
            printf("the grade is %d - and you have a A!", grade);
        }
    }


}

void findChange () {
    printf("enter the change number: ");
    scanf("%d", &change);


       if (change >= 25) {
           quarters = change / 25;
           change = change - (25*(quarters));


           printf("%d Quarters \n", quarters);
          //printf("%d", change);
       }
       if (change >= 10) {
           dimes = change / 10;
           change = change - (10* (dimes));
           printf("%d Dimes \n", dimes);

       }

       if (change >= 5) {
            nickels = change / 5;
            change = change - (5*(nickels));
           printf("%d Nickels \n", nickels);
        }

       if (change >= 1) {
            pennies = change / 1;
            change = change - (1*(pennies));
           printf("%d Pennies \n", pennies);
        }

}

void leapyear() {
    printf("enter the year that you were born in: ");
    scanf("%d", &year);
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("the year is a leap year!");
    }
    else {
        printf("the year is not a leap year!");
    }
}

void TotalHours () {
    printf("enter your wage:");
    scanf("%d", &wage);
    printf("enter the employee hours:");
    scanf("%d", &employeeHours);

    if (employeeHours > 40) {
        overtime_hours = employeeHours  - 40;
        overtime_wage = overtime_hours * 1.5;
    }

    weekly_pay = (wage + overtime_wage) * employeeHours;

    printf("the total comp is $%d", weekly_pay);
}



int main() {
    //findDistance();
    //findGrades();
    findChange();
    //leapyear();
    //TotalHours();
}