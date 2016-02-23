#include <iostream>

using namespace std;

int main()
{
	char animal[10];
	char fruit[10] = "banana";
	cout << "What animal likes to eat a " << fruit << "?\n";
	cin >> animal;

	cout << "Do you really think it's an " << animal << "?\n";

	return 0;
}