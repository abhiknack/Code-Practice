#include<stdlib.h>
#include<time.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void shuffle(int arr[], int n) {
	srand(time(NULL));
	for (int i = n - 1; i > 0; i--) {
		int j = rand() % (i + 1);
		swap(&arr[i],&arr[j]);
	}
}

void print(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

int main() {
	int arr[8] = { 1,2,3,4,5,6,7,8 };
	shuffle(arr, 8);
	print(arr,8);
	return 0;
}