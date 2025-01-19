//
// Created by 1 5 on 1/3/25.
//

//this is chapter 8: more control statements

#include <stdio.h>
#include <stdlib.h>
int i = 0;
int j = 0;
void checkerBoard() {
 for (i = 0; i <= 5; ++i) {
     if (i % 5 == 0) {
         printf("+\n");
         for (j = 0; j < 3; ++j) {
             printf("|\n");
         }
     }
     printf("-");





 }

}

int main() {
    checkerBoard();
}