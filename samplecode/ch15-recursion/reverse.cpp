//Largest element in an array
 
#include <iostream>
 
using namespace std;
 
void reverse(int list[], int low, int high);

int main() 
{
    int intArray[10] = {23, 43, 35, 38, 67, 12, 76, 10, 34, 8};

	reverse(intArray, 0, 9);

    for (int i=0; i<10; i++)
      cout << intArray[i] << " ";
    
    cout << endl;

    return 0; 
}

void reverse(int list[], int low, int high)
{
	if (low < high)
	{
		//swap
		int temp = list[low];
		list[low]= list[high];
		list[high] = temp;
		
		//do the recursion
		reverse(list, low+1, high-1);
	}

	
}