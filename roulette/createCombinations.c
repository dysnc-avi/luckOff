#include <stdio.h>

int main(void) {
  struct Nums {
    int number;
    char color[50];
    int class;
  };

  struct Nums combinations[3];

  for (int i = 1; i <= 3; i++) {
    if (i % 2 != 0) {
      struct Nums a = {i, "red", 1};
      combinations[i - 1] = a;
    } else {
      struct Nums a = {i, "black", 2};
      combinations[i - 1] = a;
    }
  }

  for (int i = 0; i < 3; i++) {
    printf("%d %s %d\n", combinations[i].number, combinations[i].color,
           combinations[i].class);
  }
}
