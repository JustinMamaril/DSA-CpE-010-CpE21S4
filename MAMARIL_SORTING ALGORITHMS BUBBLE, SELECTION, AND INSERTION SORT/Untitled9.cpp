#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
	for(int i = 1; i < n; i++) {
	int key = arr[i];
	int j = i - 1;
	while(j >= 0 && arr[j] > key) {
		arr[j + 1] = arr[j];
		j--;
	}
	arr[j + 1] = key;
	}
}
void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int data[] = {5, 3, 4, 1, 2};
	int n = sizeof(data)/sizeof(data[0]);
	insertionSort(data, n);
	cout<<"Sorted array: \n";
	printArray(data, n);
	return 0;
}
