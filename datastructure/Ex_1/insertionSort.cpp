#include <stdio.h>
void insertionSort(int arr[], int n) { //n is lenght of array
	int i, j, key; 
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}
int main() {
	int arr[] = {10, 1, 5, 7, 8, 4, 6, 2, 9, 3};
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Before Sorting\n"); //print original array
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");

	insertionSort(arr, n); //insertion sorting

	printf("After Sorting\n"); //print sorted array
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n\n");
	return 0;
}