#include <iostream>
using namespace std;

bool isPalindrome(string s);

int main()
{
  string s;
  cout << "Enter a string: ";
  cin >> s;

  cout << isPalindrome(s) << endl;

}


//this function returns true if s is a palindrome and false otherwise
bool isPalindrome(string s)
{
  return false;

}

/* note:  
  s.length() returns the length of the string
  s[i] refers to the character at index i
*/
