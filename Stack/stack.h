#ifndef STACK_H
#define STACK_H
#include "stdexcept"
#include "string"

template <class T>
class Stack {
private:	
	struct Node {
		T data;
		Node* next; 
		Node(const T& value) : data(value), next(nullptr) {}
	};
	Node* top; // Pointer to the first node in the chain
public:
	Stack(); // Default ctor
	Stack(const Stack<T>&); // Copy ctor
	~Stack(); // Dtor

	// Stack operations
	bool isEmpty() const;
	bool pop();
	bool push(const T&);
	T& peek() const;	
};

#include "stack.cpp"
#endif
