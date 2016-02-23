#include <iostream>

using namespace std;

class Room {
	char name[6];
	Room* next;

public:
	Room(char* name);
	void SetNext(Room* next);
	char* Name();
	//Room* FetchByName(char[64] name);
};


Room::Room (char* name)
{
	this->name = "happy";
}

char* Room::Name()
{
	return this->name;
}

void Room::SetNext (Room* next)
{
	this->next = next;
}

int main()
{
	/*
	Room* house = new Room("Front Door");

	cout << "This is the " << house->Name() << "\n";
	*/
	return 0;
}
