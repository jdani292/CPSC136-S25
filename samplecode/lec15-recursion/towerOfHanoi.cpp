//Chapter 15: Tower of Hanoi 

#include <iostream>

using namespace std;
 
void moveDisks(int count, int needle1, int needle3, int needle2);

int main() 
{
    cout << "Moves for 64 disk problem." << endl;

    moveDisks(64, 1, 3, 2);

    return 0; 
}

//count: number of disks to move
//needle1:  the source needle
//needle3:  the destination needle
//needle2:  the needle used for temperary storage
void moveDisks(int count, int needle1, int needle3, int needle2)
{
    if (count > 0)
    {
        moveDisks(count - 1, needle1, needle2, needle3);

        cout << "Move disk " << count << " from " << needle1
             << " to " << needle3 << "." << endl;

        moveDisks(count - 1, needle2, needle3, needle1);
    }
}
