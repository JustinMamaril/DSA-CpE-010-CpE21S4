#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
	for(int i = 0; i < n-1; i++) {
		for(int j = 0; j < n-i-1; j++) {
			if(arr[j] > arr[j+1]) {
				int temp = arr[j];
				arr[j] = arr[j+1];


				arr[j+1] = temp;
			}
		}
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
	bubbleSort(data, n);
	cout<<"Sorted array: \n";
	printArray(data, n);
	return 0;
}
