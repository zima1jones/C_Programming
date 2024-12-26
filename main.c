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
    grade = 90;

    if (grade <= 60) {
        printf("the grade is %d and you have failed!", grade);
    }
//you are on exercise 6-3 find a way to get the dashes and crosses placed here
    if (grade >= 61 && grade <= 70) {
        if (grade <= 63) {
            printf("the grade is %d - and you have failed!", grade);
        }
        printf("the grade is %d and you have have a D!", grade);
    }
    if (grade >= 71 && grade <= 80) {
        printf("the grade is %d and you have a C!", grade);
    }
    if (grade >= 81 && grade <= 90) {
        printf("the grade is %d and you have a B!", grade);
    }
    if(grade >= 91) {
        printf("the grade is %d and you have a A!", grade);
    }


}



int main() {
    findDistance();
    findGrades();

}