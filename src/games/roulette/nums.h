#ifndef NUMS_H
#define NUMS_H

struct Nums {
  int number;
  char color[50];
  int category;
};


void renderWheel();
void createCombinations(struct Nums *combinations);

#endif NUMS_H