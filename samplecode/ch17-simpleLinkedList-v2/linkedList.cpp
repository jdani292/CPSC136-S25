#include "linkedList.h"
#include <iostream>

using namespace std;

linkedList::linkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}


void linkedList::insertAtEnd(int x)
{
  //create a new node
  node* temp = new node;
  temp -> num = x;
  temp -> next = nullptr;

  //insert at end
  if (head == nullptr) //list is currently empty
    {
      head = temp;
      tail = temp;
    }
  else
    {
      tail -> next = temp;
      tail = tail -> next;
    }
  count++;  

}

void linkedList::print() const
{
  node *temp = head;
  while (temp != nullptr)
    {
      cout << temp -> num;

      temp = temp -> next;

      if(temp!=nullptr)
	      cout << " -> ";
    }
  cout << endl;


}
