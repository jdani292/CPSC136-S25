#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
using namespace std;

//define the list node
struct node{
  int num;
  node *next;
  node *previous;
};

class doublyLinkedList
{
 public:
  doublyLinkedList();
  void insertAtEnd(int num);
  void print();
  void reversePrint();
  void deleteNode(int x);

 private:
  node * head;
  node * tail;
  int count;
};

#endif
