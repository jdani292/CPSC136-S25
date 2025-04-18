// reverse_string.cpp

#include <iostream>
#include <string>
using namespace std;

// Function prototype
void reverseString(string &s, int left, int right);

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // use getline to allow spaces

    reverseString(s, 0, s.length() - 1);

    cout << "Reversed string: " << s << endl;

    return 0;
}

// TODO: Implement this recursive function
void reverseString(string &s, int left, int right) {
    // Your code here
}
