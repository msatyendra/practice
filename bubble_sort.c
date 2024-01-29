#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define LENGTH 12
int main()
{
	int arr[LENGTH];
	char swapped;
	srand(getpid());
	for(int i=0;i<LENGTH;i++)
		arr[i] = rand()%100;
	printf("Array before sorting-\n");
	for(int i=0;i<LENGTH;i++)
		printf("%d ",arr[i]);
	printf("\n");
	
	/*Bubble Sort Logic*/
	for(int i=0;i<LENGTH-1;i++) {
		swapped = 0;
		for(int j=0;j<LENGTH-i-1;j++) {
			if(arr[j] > arr[j+1]) {
				//swap
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				swapped = 1;
			}
		}
		if(swapped == 0)
			break;
	}

	printf("Array after sorting-\n");
	for(int i=0;i<LENGTH;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
