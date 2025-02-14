#include "nums.h"

struct Nums {
  int number;
  char color[50];
  int category;
};

int main(){
    renderWheel();
    static struct Nums combinations[36];
    createCombinations(combinations);
    for(int i = 0; i < 36; i++){
        printf("%d %s %d\n", combinations[i].number, combinations[i].color, combinations[i].category);
    }
    return 0;
}