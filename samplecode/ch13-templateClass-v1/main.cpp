#include <iostream>
#include "listType.h"
using namespace std;

int main() {
    // Create a list of integers
    listType<int> intList(10);
    intList.insertAt(30, 0);
    intList.insertAt(10, 1);
    intList.insertAt(20, 2);

    cout << "Integer list (unsorted): ";
    intList.print();

    intList.sort();
    cout << "Integer list (sorted): ";
    intList.print();

    // Create a list of doubles
    listType<double> doubleList(10);
    doubleList.insertAt(5.5, 0);
    doubleList.insertAt(3.3, 1);
    doubleList.insertAt(9.9, 2);

    cout << "Double list (unsorted): ";
    doubleList.print();

    doubleList.sort();
    cout << "Double list (sorted): ";
    doubleList.print();

    return 0;
}
