//filename Mamaril_JustinKenneth-PracticalLabExam
#include <iostream>
using namespace std;

int main()
{
    //Create an array of 10 integers
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    //Display the array items
    cout << "Display Elements:" << endl;
    for (int i = 0; i < 10; i++) 
    {
        cout << array[i] << " "; 
    } cout << endl;
    
    //Calculate for the sum of the array items
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    //Display the sum
    cout << "Sum of the elements: " << sum << endl;
    
    return 0;
}
