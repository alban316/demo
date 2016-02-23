#include <iostream>

using namespace std;

class Node {
public:
	int Value;
	Node* Next;

	Node(int value, Node* ptrNext) {
		Value = value;
		Node = ptrNext;
	}

};



int main(void) {
	Node node = Node(4, NULL);

	cout << "The value is " << node.Value << "\n";

	return 0;
}