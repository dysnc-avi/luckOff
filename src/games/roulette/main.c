#include <stdio.h>
#include "nums.h"
#include <stdbool.h>

int main(){
  int choice;
  bool loop = true;
  printf("Welcome to the game\n");
 while (loop==true)
 {
  printf("Press 1 for rules, 2 to play, 3 to exit\n");
  scanf("%d", &choice);
  switch (choice){
    case 1:
      printf("This is rule\n");
      break;
    case 2:
    // todo: Add game logic
      printf("This is play\n");
      loop = false;
      break;
    case 3:
      printf("See you later\n");
      loop = false;
      break;
    default: 
      printf("Invalid choice\n");
      loop = false;
      break;
  }
 }
}