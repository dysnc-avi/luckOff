#include "nums.h"
#include <stdio.h>
#include <stdbool.h>

bool isOdd(int num){
    if(num%2 != 0){
        return true;
    } else {
        return false;
    }
}

bool lessthan10(int num){
    if(num < 10){
        return true;
    } else {
        return false;
    }
}

void printZeroSet(){
    for(int i = 0; i < 5; i++){
        if(i%2 != 0 && i == 1){
            printf("0");
        } else if (i%2 != 0){
            printf("00");
        } else {
            printf(" ");
        }
    }
    printf("\n");
}

void printNums(){
    int count = 1;
    int jCount = 0;
    for(int i = 0; i < 12; i++){
        for(int j = 0; j < 7; j++){
            if(j == 5){
                printf("|");
            } else if( j == 6){
                if(jCount == 0){
                    printf("37. RED");
                    jCount++;
                } else if(jCount == 1){
                    printf("38. BLACK");
                    jCount++;
                } else if(jCount == 2){
                    printf("39. EVEN");
                    jCount++;
                } else if(jCount == 3){
                    printf("40. ODD");
                    jCount++;
                } else if(jCount == 4){
                    printf("41. 1 to 12");
                    jCount++;
                } else if(jCount == 5){
                    printf("42. 13 to 24");
                    jCount++;
                } else if(jCount == 6){
                    printf("43. 25 to 36");
                    jCount++;
                } else if(jCount == 7){
                    printf("44. 1 to 18");
                    jCount++;
                } else if(jCount == 8){
                    printf("45. 19 to 36");
                    jCount++;
                } else if(jCount == 9){
                    printf("46. FIRST VERTICAL ROW");
                    jCount++;
                } else if(jCount== 10){
                    printf("47. SECOND VERTICAL ROW");
                    jCount++;
                } else if(jCount == 11){
                    printf("48. THIRD VERTICAL ROW");
                    jCount++;
                }
            } 
            else if(j < 5 && j%2 == 0){
                if(lessthan10(count) && isOdd(count)){
                    printf("R0%d ", count);
                    count++;
                } else if (lessthan10(count) && !isOdd(count)){
                    printf("B0%d ", count);count++;
                } else if(!lessthan10(count) && isOdd(count)){
                    printf("R%d ", count); count++;
                } else if(!lessthan10(count) && !isOdd(count)){
                    printf("B%d ", count); count++;
                }
            } 
        }
        printf("\n");
    }
}

void renderWheel(){
    printZeroSet();
    printNums();
}

struct Nums {
    int number;
    char color[50];
    int category;  
};

struct Nums createNums(int num, char color[50], int category) {
    struct Nums a;
    a.number = num;
    strcpy(a.color, color); 
    a.category = category;
    return a;
}

void createCombinations(struct Nums *combinations){
    for (int i = 1; i <= 36; i++) {
        if (i % 2 == 0) {
            combinations[i - 1] = createNums(i, "RED", 1);
        } else {
            combinations[i - 1] = createNums(i, "BLACK", 2);
        }
    }
}

