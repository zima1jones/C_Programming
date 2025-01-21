//
// Created by 1 5 on 1/3/25.
//

//this is chapter 8: more control statements

#include <stdio.h>
#include <stdlib.h>
int i = 0;
int j = 0;
int k = 0;
int l = 0;
void checkerBoard() {
    for (l = 0; l < 8; ++l) {

            for (i = 0; i < 49; ++i) {
                if (i % 6 == 0) {
                    printf("+");
                }

                else if (i == 48) {
                    printf("\n");
                }
                else {
                    printf("-");
                }

            }


            printf("\n");
            for (k = 0; k < 3; ++k) {
                for (i = 0; i < 49; ++i) {
                    if (i % 6 == 0) {
                        printf("|");
                    }
                    else {
                        printf(" ");
                    }




                }
                printf("\n");
            }

    }
    for (i = 0; i < 49; ++i) {
        if (i % 6 == 0) {
            printf("+");
        }

        else if (i == 48) {
            printf("\n");
        }
        else {
            printf("-");
        }

    }

}

int main() {
    checkerBoard();
}