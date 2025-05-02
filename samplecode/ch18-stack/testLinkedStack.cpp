#include <iostream>
#include "linkedStack.h"

using namespace std;

int main()
{
    linkedStackType<int> stack;

    cout << "Initial stack state (should be empty): " 
         << (stack.isEmptyStack() ? "Empty" : "Not empty") << endl;

    cout << "\nPushing elements: 10, 20, 30" << endl;
    stack.push(10);
    stack.push(20);
    stack.push(30);

    cout << "Top element (should be 30): " << stack.top() << endl;

    cout << "\nPopping top element..." << endl;
    stack.pop();

    cout << "Top element after pop (should be 20): " << stack.top() << endl;

    cout << "\nPushing more elements: 40, 50, 60" << endl;
    stack.push(40);
    stack.push(50);
    stack.push(60);  // linked stack has no fixed limit

    cout << "\nCurrent stack (from top to bottom):" << endl;
    while (!stack.isEmptyStack())
    {
        cout << stack.top() << " ";
        stack.pop();
    }
    cout << endl;

    cout << "\nStack state after popping all (should be empty): " 
         << (stack.isEmptyStack() ? "Empty" : "Not empty") << endl;

    cout << "\nCalling pop() on an empty stack (should show warning):" << endl;
    stack.pop();  // test edge case

    

    return 0;
}
