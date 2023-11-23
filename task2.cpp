#include <stdio.h>
#include <stdlib.h>
void reversed(int *array, int length){
    int *start = array;
    int *end = array + length - 1;
    while(start < end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start = start + 1;
        end = end - 1;}}
int main(){
    printf("Enter a number : ");int length;scanf("%d",&length);
    int *array = (int *)malloc(sizeof(int) * length);
    int *pointer = array;
    for(int index = 0;index < length;index++){*(pointer + index) = index + 1;}
    int size = sizeof(int) * length;
    printf("array : ");
    for(int index = 0;index < length;index++){printf("%3d",*(pointer + index));}
    printf("\nsize in bytes : %d\n",size);
    printf("length : %d\n",length);
    reversed(pointer, length);
    printf("reversed array : ");
    for(int index = 0;index < length;index++){printf("%3d",*(pointer + index));}
    free(pointer);
    return 0;}