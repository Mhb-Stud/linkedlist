#ifndef _SINGLE_NODE
#define _SINGLE_NODE

template<typename Type>
class SingleNode {
private:

	Type value = 0;
	SingleNode<Type>* next = nullptr;

public:

	SingleNode(Type const& val, SingleNode<Type>* nx) : value(val), next(nx) {}
	SingleNode() {}
	~SingleNode() {}

	//accessors
	Type getValue() {
		return value;
	}
	SingleNode<Type>* getNext() {
		return next;
	}

};
#endif
