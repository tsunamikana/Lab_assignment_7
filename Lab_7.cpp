#include <stdio.h>
#include <stdlib.h>
#define MAXARRAY 9
//total swaps= all swap totals/2

typedef struct element { //make element struct to store diff num and swaps
	int data[MAXARRAY];
	int numswaps[MAXARRAY];

}element;

element* createelement(element* ) { //create new element+assign data function(constructor?)
	element* newelement = (element*)malloc(sizeof(element));
	for(int i=0;i<MAXARRAY;i++)
	{
		newelement->data[i] = 0;
		newelement->numswaps[i] = 0;
	}
	return newelement;
}

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	return;

}
element* bubblesort(element* array) {
	int n = MAXARRAY;

	for (int i = 0; i < n-1; i++) {
		for (int j=0;j<n-i-1;j++)
		{
			if (array->data[i] > array->data[i + 1]) {
				swap(array->data+i, array->data+i + 1);
				/*int temp = array->data[i];
				array->data[i] = array->data[i + 1];
				array->data[i + 1] = temp;*/
				array->numswaps[i]++;
				array->numswaps[i + 1]++;
				
			}
		}
		
	}
	return array;
}





int main(element* array) {



	//Consider running Bubble and Selection Sorts on the two arrays shown below.
	// Write a c program to compute the number of swaps performed on each value and total number of swaps performed:

//array1: 97  16  45  63  13  22  7  58  72
//array2 : 90  80  70  60  50  40  30  20  10

int arr1[MAXARRAY] = { 97,16,45,63,13,22,7,58,72 };
int arr2[MAXARRAY] = { 90,80,70,60,50,40,30,20,10 };


element* array1= createelement(array);
for (int i = 0; i < MAXARRAY; i++) {
	array1->data[i] = arr1[i];

}
element* array2 = createelement(array1);
for (int i = 0; i < MAXARRAY; i++) {
	array1->data[i] = arr1[i];

}

//bubblesort(array1);
//print test
printf("bubblesorted array 1: ");
for (int i = 0; i < MAXARRAY; i++) {
	printf("%d, ", bubblesort(array1)->data[i]);
}


	return 0;

}
