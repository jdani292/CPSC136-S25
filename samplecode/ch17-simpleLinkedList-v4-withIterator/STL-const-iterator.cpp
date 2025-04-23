#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    list<int> lst = {10, 20, 30, 40, 50};
    deque<int> deq = {100, 200, 300, 400, 500};

    // Vector: read-only iteration
    cout << "Vector (const_iterator): ";
    for (vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";     // ✅ OK: reading is allowed
        // *it += 1;            // ❌ Error: modifying is not allowed
    }
    cout << "\n";

    // List: read-only iteration
    cout << "List (const_iterator): ";
    for (list<int>::const_iterator it = lst.begin(); it != lst.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    // Deque: read-only iteration
    cout << "Deque (const_iterator): ";
    for (deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it) {
        cout << *it << " ";
    }
    cout << "\n";

    return 0;
}
