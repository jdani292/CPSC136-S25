#include "doublyLinkedList.h"
#include <iostream>

using namespace std;

doublyLinkedList::doublyLinkedList()
{
  head = nullptr;
  tail = nullptr;
  count = 0;
}

void doublyLinkedList::reversePrint()
{
  node * temp = tail;
  while(temp != nullptr)
    {
      cout << temp -> num;
      temp = temp -> previous;
      if (temp != nullptr)
        cout << " -> ";

    }
  cout << endl;

}

void doublyLinkedList::deleteNode(int x)
{
  //case 1: if list is empty
  if (head == nullptr)
    {
      cout << "Cannot delete from an empty list.\n";
    }
  //case 2: x is in the first node
  else if (head -> num == x)
    {
      node * temp;
      temp = head;
      head = head -> next;
      head -> previous = nullptr;
      
      count--;

      if (head == nullptr) // list has only one node
        tail = nullptr;

      delete temp; //deallocate the node
    }
  //case 3: x is not in the first node
  else
    {
      bool found = false;
      node* temp = head;

      //use a while loop to find x
      while (temp != nullptr)
        {
          if (temp-> num == x)
            {
              found = true;
              break;
            }
          else
              temp = temp -> next;
        }

      if (temp == nullptr)
	cout << "The item is not in the list.\n";
      else
	{
	  if (temp == tail)
	    {
	      //delete the last node
	      tail = tail -> previous;
	      tail -> next = nullptr;
	      count--;
	      delete temp;

	    }
	  else
	    {
	      node *prev = temp -> previous;
	      node *after = temp -> next;
	      prev-> next = after;
	      after -> previous = prev;
	      count--;
	      delete temp;
	    }
	}
    }
}


void doublyLinkedList::print()
{
  node * temp = head;
  while(temp != nullptr)
    {
      cout << temp -> num;
      temp = temp -> next;
      if (temp != nullptr)
	cout << " -> ";

    }
  cout << endl;

}

void doublyLinkedList::insertAtEnd(int num)
{
  
  node * temp = new node;
  temp-> num = num;
  temp-> next = nullptr;

  if (head == nullptr) //list is empty
    {
      temp -> previous = nullptr;
      head = temp;
      tail = temp;
      count++;
    }
  else //list is not empty
    {
      temp -> previous = tail;
      tail -> next = temp;
      tail = temp;
      count++;
    }
}


