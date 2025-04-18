//Fibonacci number
 
#include <iostream>
 
using namespace std;
 
int main() 
{
    int firstFibNum;
    int secondFibNum; 
    int nth;
	int array[100];

    cout << "Enter the first Fibonacci number: ";
    cin >> firstFibNum;
    cout << endl;

    cout << "Enter the second Fibonacci number: ";
    cin >> secondFibNum;
    cout << endl;

    cout << "Enter the position of the desired Fibonacci number: ";
    cin >> nth;
    cout << endl;

	array[1] = firstFibNum;
	array[2] = secondFibNum;
	
	for (int i = 3; i <= nth; i++)
		array[i] = array[i-1]+array[i-2];
	
    cout << "The Fibonacci number at position " << nth 
         << " is: " << array[nth]
         << endl;

    return 0;
}


