#include <iostream>

using namespace std;

class Foo {
private:
	int m_value;

public:
	Foo(int value) {
		m_value = value;
	}

	int Value() {
		return m_value;
	}
};

int main(void) {
	
	Foo foo = Foo(4);
	cout << "The value is " << foo.Value() << "\n";
	return 0;
}