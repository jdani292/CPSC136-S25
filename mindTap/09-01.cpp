#include <iostream>
#include <iomanip>

using namespace std;

struct computerType
{
    string manufacturer;
    string modelType;
    string processorType;
    int ram;
    int hardDriveSize;
    int yearBuilt;
    double price;
};

int main() {
    // Write your main here
    computerType computer;

    //input values
    cout << "Enter the name of the manufacturer: ";
    getline(cin, computer.manufacturer);

    cout << fixed << showpoint << setprecision(2);

    //output
    cout << "Manufacturer: " << computer.manufacturer << endl;



    return 0;
}
