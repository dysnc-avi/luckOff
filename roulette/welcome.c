#include <stdio.h>

void renderL() {
  int lines = 6;
  for (int i = 0; i < lines; i++) {
    if (i < (lines - 1)) {
      printf("**\n");
    } else {
      printf("*****");
    }
  }
}

void renderC(){
    int lines = 6;
  for (int i = 0; i < lines; i++) {
    int positiveRows = 2;
    int negativeRows = lines - 2;
    if (i < positiveRows || i >= negativeRows) {
      printf("******\n");
    } else {
      printf("**\n");
    }
  }
}

void renderU() {
  int lines = 6;
  for (int i = 0; i < lines; i++) {
    if (i < (lines - 1)) {
      printf("**  **\n");
    } else {
      printf("******");
    }
  }
}