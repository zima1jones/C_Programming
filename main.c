#include <stdio.h>

int distance1;
int distance2;
int totalDistance;
int grade;

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



int main() {
    findDistance();
    findGrades();

}