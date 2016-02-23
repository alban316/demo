#include <iostream>
#include <math.h>

using namespace std;

class Node {
	int data;
	Node* next;

public:
	Node();							//constructor
	Node(int data, Node* next);		//constructor (overloaded)
	~Node(); 						//deconstructor

	void SetData(int data) {
		this->data = data;
	}

	void SetNext(Node* next) {
		this->next = next;
	}

	int Data() {
		return data;
	}

	Node* Next() {
		return next;
	}
};


Node::Node() {
	this->data = -1;
	this->next = NULL;
}


Node::Node(int data, Node* next) {
	this->data = data;
	this->next = next;
}


int main() {

	Node* head = new Node;
	Node* cur = head;

	// create a fill a linked list
    int i = 0;
	while (i < 7)
    {
		cur->SetData(pow(2,i));
		cur->SetNext(new Node);
		cur = cur->Next();
	    i++;
    }
    cur->SetData(pow(2,i));
	
	// display the contents of the list
	cur = head;
	while (cur != NULL) {
		cout << cur->Data() << "\n";
		cur = cur->Next();
	}

	cout << "Done!\n";
}
