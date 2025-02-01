#include "nums.h"

struct Nums {
  int number;
  char color[50];
  int class;
};
struct Combinations {
    struct Nums combinations[36];
};

int main(){
    renderWheel();
    struct Combinations combo;
    combo = createCombinations();
    return 0;
}