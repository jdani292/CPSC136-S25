#include <iostream>
#include <fstream>

using namespace std;

struct menuItemType
{
    string menuItem;
    double menuPrice;
};

void printCheck(menuItemType items[], int choices[], int size);

int main()
{
    //declare menuItemType array
    menuItemType items[8];

    //open data file
    ifstream fp;
    fp.open("Ch9_Ex4Data.txt");

    //check if file opens
    if (!fp)
    {
        cout << "Error opening file\n";
        return 0;
    }

    //read from file
    int i = 0;
    char c;
    while(getline(fp, items[i].menuItem))
    {
        fp >> items[i].menuPrice;  //read item price
        fp.get(c);  //get rid of "\n"
        i++;
    }

    //print menu
    cout << "----Today's Menu----\n";
    for (int i=0; i < 8; i++)
    {
        cout << items[i].menuItem << " " << items[i].menuPrice << endl;
    }


    //declare an int array with initial values zero
    int choices[8] = {0};

    //use a loop to read in user choices
    char answer;
    int count = 0;
    cout << "Do you want to make selection Y/N: ";
    cin >> answer;
    while (answer == 'Y')
    {
        cout << "Enter item number: ";
        cin >> choices[count];
        count ++;

        cout << "Do you want to make selection Y/N: ";
        cin >> answer;

    }

    //call the function to print check
    printCheck(items, choices, 8);

    return 0;
}


//print the check based on the contents of two arrays
void printCheck(menuItemType items[], int choices[], int size)
{
    // TO DO





}
