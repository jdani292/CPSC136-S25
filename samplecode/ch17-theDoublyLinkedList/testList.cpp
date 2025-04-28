#include "doublyLinkedList.h"
#include <iostream>

using namespace std;

int main()
{
  doublyLinkedList a;
  a.insertAtEnd(1);
  a.insertAtEnd(3);
  a.insertAtEnd(5);
  a.insertAtEnd(7);
  a.insertAtEnd(9);
  a.print();
  a.reversePrint();

  a.deleteNode(5);
  a.print();
  a.deleteNode(1);
  a.print();
  a.deleteNode(9);
  a.print();



}
