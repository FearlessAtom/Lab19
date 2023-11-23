#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(){
    srand(time(0));
    int const NUMBER = 10;
    int *array = (int *)malloc(sizeof(int) * 10);
    int *pointer = array;
    for(int index = 0;index < NUMBER;index++){
        *(pointer + index) = rand() % 20 - 10;
        printf("%4d",*(pointer + index));}
    for(int index = 0;index < NUMBER - 5;index++){*(pointer + index) = *(pointer + index + 5);}
    printf("\n");
    for(int index = 0;index < NUMBER - 5;index++){printf("%4d",*(pointer + index));}
    for(int index = NUMBER - 5;index < NUMBER - 5 + 3;index++){*(pointer + index) = rand() % 20 - 10;}
    printf("\n");
    for(int index = 0;index < NUMBER - 5 + 3;index++){printf("%4d",*(pointer + index));}
    free(pointer);
    return 0;}