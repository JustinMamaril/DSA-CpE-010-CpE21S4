#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void insertionSort(int A[], int n) {
    for (int i = 1; i < n; i++) {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

void countVotes(int A[], int n, int votes[]) {
    for (int i = 0; i < n; i++) {
        votes[A[i] - 1]++; // Increment the vote count for each candidate
    }
}

int findWinner(int votes[]) {
    int maxVotes = 0;
    int winner = 0;
    for (int i = 0; i < 5; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winner = i + 1; // Candidate number (1 to 5)
        }
    }
    return winner;
}

int main() {
    srand(time(0)); // Seed for random number generation
    const int n = 101; // Size of the array
    int A[n]; // Array to store votes
    int votes[5] = {0}; // Array to store votes for each candidate

    // Generate random votes
    for (int i = 0; i < n; i++) {
        A[i] = rand() % 5 + 1; // Random value between 1 and 5
    }

    // Print the original array
    cout << "Original Array A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Sort the array using Insertion Sort
    insertionSort(A, n);

    // Print the sorted array
    cout << "Sorted Array A: ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Count the votes
    countVotes(A, n, votes);

    // Print the votes
    cout << "Votes: ";
    for (int i = 0; i < 5; i++) {
        cout << votes[i] << " ";
    }
    cout << endl;

    // Find the winner
    int winner = findWinner(votes);

    // Print the winner
    cout << "Winner: Candidate " << winner << " (with " << votes[winner - 1] << " votes)" << endl;

    return 0;
}
