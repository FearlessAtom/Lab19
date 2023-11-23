#include <stdio.h>
#include <stdlib.h>
int main(){
    int length = 10;
    int *array = (int *)malloc(sizeof(int) * length);
    int *pointer = array;
    for(int index = 0;index < length;index++){
        *(pointer + index) = index;
        printf("%3d",*(pointer + index));}
    for(int index = 1;index < length - 1;index = index + 2){
        int temp = *(pointer + index);
        *(pointer + index) = *(pointer + index + 1);
        *(pointer + index + 1) = temp;}
    printf("\n");
    for(int index = 0;index < length;index++){printf("%3d",*(pointer + index));}
    free(pointer);
    return 0;}