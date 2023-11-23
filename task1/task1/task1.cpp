#include <stdio.h>
#include <stdlib.h>
int main() {
	int length = 10;
	int* m = (int*)malloc(sizeof(int) * length);
	int* array = m;
	printf("array = ");
	int x, y = 10;
	int* pointer = &y;
	for (int index = 0; index < length; index++) {
		*(array + index) = index;
		printf("%2d", *(array + index));}
	printf("\nvalue of y = %d\n", *pointer);
	x = *pointer;
	printf("value of x = %d\n", x);

	printf("value of pointer before = %d\n", pointer);
	y = 7;
	
	printf("value of pointer after changing y to 7 = %d\n", pointer);
	*pointer = *pointer + 5;
	printf("value of y after adding 5 to its pointer = %d", *pointer);
	return 0;}