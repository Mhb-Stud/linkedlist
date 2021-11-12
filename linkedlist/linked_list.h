#ifndef _LINKED_LIST
#define _LINKED_LIST
#include "single_node.h"

template<typename Type>
class LinkedList {
private:

	SingleNode<Type>* head;
	
public:

	LinkedList(): head(nullptr) , tail(nullptr) {}
	~LinkedList() {
		SingleNode* first = head;
		SingleNode* second = head->getNext;
		
	}
	void push(Type const &val) {
		if (isEmpty()) head = new SingleNode(val, nullptr);
		else {
			SingleNode<Type>* temp = head;
			head = new SingleNode(val, temp);
		}
	}
	void print() {}
	void pop() {
		if (!isEmpty()) {
			head = head->getNext;
		
		}
		else throw underflow();
	
	}
	Type top() {
		return head->getValue;
	
	}
	bool isEmpty() {
		if (head == nullptr) return true;
		return false;
	}

};

#endif