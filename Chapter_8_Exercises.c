//
// Created by 1 5 on 1/3/25.
//

//this is chapter 8: more control statements

#include <stdio.h>
#include <stdlib.h>

void checkerBoard() {
 for (int i = 0; i < 40; i++) {
     printf("-");
     if (i % 5 == 0) {
         printf("+");
     }


 }

}

int main() {
    checkerBoard();
}