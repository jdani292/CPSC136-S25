#include <iostream>
#include <iomanip> 
#include <string>

using namespace std;

//takes the vote array as the input and returns the total number of votes
int sumVotes(int list[], int size);

//takes the vote array as the input and returns the Index of the winner
int winnerIndex(int list[], int size);

int main()
{
    int num; //number of candidates

    cout << "Enter number of candidates: ";
    cin >> num;

    //declare pointer variables
    string *names; 
    int *votes;

    //declare two dynamic arrays
    names = new string[num];
    votes = new int[num];

    
    cout << "Enter name and votes " << endl;

    for (int i = 0; i < num; i++)
        cin >> names[i] >> votes[i];

    //you can pass an integer pointer variable to be used as an integer array    
    int total = sumVotes(votes, num);
    int index = winnerIndex(votes, num);

    cout << fixed << showpoint << setprecision(2);
    cout << "Candidate Votes Received % of Total Votes" << endl;
    
    //TO DO: use a for-loop to output name votes percentages


    cout << "Total " << total << endl;

    cout << "The Winner of the Election is: " << names[index] << endl;

    return 0;
}

int sumVotes(int list[], int size)
{
    //TO DO
    return 0;
}

int winnerIndex(int list[], int size)
{
    //TO DO
    return 0;
}
