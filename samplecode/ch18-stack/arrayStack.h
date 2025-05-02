#ifndef H_ArrayStackType 
#define H_ArrayStackType
 
#include <iostream> 
#include <cassert>
#include "stackADT.h"

using namespace std;

template <class Type>
class arrayStackType: public stackADT<Type>
{
public:
    const arrayStackType<Type>& operator=(const arrayStackType<Type>&);

    void initializeStack();
    bool isEmptyStack() const;
    bool isFullStack() const;
    void push(const Type& newItem);
    Type top() const;
    void pop();

    arrayStackType(int stackSize = 100);
    arrayStackType(const arrayStackType<Type>& otherStack);
    ~arrayStackType();

private:
    int maxStackSize;
    int stackTop;
    Type *list;

    void copyStack(const arrayStackType<Type>& otherStack);
};

// Implementations

template <class Type>
void arrayStackType<Type>::initializeStack()
{
    stackTop = 0;
}

template <class Type>
bool arrayStackType<Type>::isEmptyStack() const
{
    return (stackTop == 0);
}

template <class Type>
bool arrayStackType<Type>::isFullStack() const
{
    return (stackTop == maxStackSize);
}

template <class Type>
void arrayStackType<Type>::push(const Type& newItem)
{
    if (!isFullStack())
    {
        list[stackTop] = newItem;
        stackTop++;
    }
    else
        cout << "Cannot add to a full stack." << endl;
}

template <class Type>
Type arrayStackType<Type>::top() const
{
    assert(stackTop != 0);
    return list[stackTop - 1];
}

template <class Type>
void arrayStackType<Type>::pop()
{
    if (!isEmptyStack())
        stackTop--;
    else
        cout << "Cannot remove from an empty stack." << endl;
}

template <class Type>
arrayStackType<Type>::arrayStackType(int stackSize)
{
    if (stackSize <= 0)
    {
        cout << "Size of the array must be positive. Defaulting to 100." << endl;
        maxStackSize = 100;
    }
    else
        maxStackSize = stackSize;

    stackTop = 0;
    list = new Type[maxStackSize];
}

template <class Type>
arrayStackType<Type>::~arrayStackType()
{
    delete[] list;
}

template <class Type>
void arrayStackType<Type>::copyStack(const arrayStackType<Type>& otherStack)
{
    delete[] list;
    maxStackSize = otherStack.maxStackSize;
    stackTop = otherStack.stackTop;
    list = new Type[maxStackSize];
    for (int j = 0; j < stackTop; j++)
        list[j] = otherStack.list[j];
}

template <class Type>
arrayStackType<Type>::arrayStackType(const arrayStackType<Type>& otherStack)
{
    list = nullptr;
    copyStack(otherStack);
}

template <class Type>
const arrayStackType<Type>& arrayStackType<Type>::operator=(
    const arrayStackType<Type>& otherStack)
{
    if (this != &otherStack)
        copyStack(otherStack);
    return *this;
}

#endif
