#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main() {
    // Vector
    vector<int> vec = {1, 2, 3, 4, 5};
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        *it += 1;
    }
    cout << "Modified Vector: ";
    for (vector<int>::iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // List
    list<int> lst = {10, 20, 30, 40, 50};
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        *it += 1;
    }
    cout << "Modified List: ";
    for (list<int>::iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // Deque
    deque<int> deq = {100, 200, 300, 400, 500};
    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it) {
        *it += 1;
    }
    cout << "Modified Deque: ";
    for (deque<int>::iterator it = deq.begin(); it != deq.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
