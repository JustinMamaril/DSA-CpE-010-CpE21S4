#include<iostream>
#include<cstdlib>
#include<ctime>
#include<iomanip>



using namespace std;
int main() {
	
	srand(time(0)); // seed for random number generation
	int arr[100];
	
	cout << "Unsorted Array:" << endl;
	
	for(int i = 0; i < 100; i++) {
		arr[i] = rand() % 100; // generate random number between 0 and 99
		
		cout << setw(5) << i << setw(10) << arr[i] << endl;
	}
	return 0;
}
