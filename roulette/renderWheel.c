#include <stdio.h>
#include <stdbool.h>

bool isOdd(int num){
    if(num%2 != 0){
        return true;
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
    for(int i = 0; i < 11; i++){
        for(int j = 0; j < 6; j++){
            if(j == 5){
                printf("|");
            }
            else if(j%2 == 0){
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

void main(){
    printZeroSet();
    printNums();
}