#include<iostream>
using namespace std;

void selectionSort(int arr[], int n) {
	for(int i = 0; i < n-1; i++) {
		int min_idx = i;
		for(int j = i+1; j < n; j++) {
			if(arr[j] < arr[min_idx])
				min_idx = j;
		}
		int temp = arr[min_idx];
		arr[min_idx] = arr[i];
		arr[i] = temp;
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
	selectionSort(data, n);
	cout<<"Sorted array: \n";
	printArray(data, n);
	return 0;
}
