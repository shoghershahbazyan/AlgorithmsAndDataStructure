#include "stack.h"

// 
template <class T>
Stack<T>::Stack() : top(nullptr) {}

template <class T>
Stack<T>::Stack(const Stack<T>& aStack) {
	Node* atop = aStack.top;
	// Original stack is empty
	if (atop == nullptr) {
		top = nullptr;
	} else {
		// Copy the prits node
		top = new Node(atop->data);
		// Copy the rest of the nodes
		Node* current = top;
		atop = atop->next;
		while (atop) {
			current->next = new Node(atop->data);
			current = current->next;
			atop = atop->next;
}
		current->next = nullptr;
	}
}

template <class T>
Stack<T>::~Stack() {
	while (top != nullptr) {
		Node* tmp = top;
		top = top->next;
		delete tmp;
	}
}

template <class T>
bool Stack<T>::isEmpty() const {
	return top == nullptr;
}

template <class T>
bool Stack<T>::pop(){
	bool result{false};
	if(top) {
		// If stack is not empty delete the top
		Node* current = top;	
		top = top->next;
		delete current;
		current = nullptr;
		result = true;

	}
	return result;
}
	
template <class T>
bool Stack<T>::push(const T& value) {
	Node* newTop = new Node(value);
	newTop->next = top;
	top = newTop;
	newTop = nullptr;
	return true;
}

template <class T>
T& Stack<T>::peek() const {
	// if empty throw
	if (isEmpty()) {
		throw std::out_of_range("Stack is emply. Cannot peek.");
	}
	return top->data;
}
