#pragma once
class User
{
private:
	int ID;
	static int counter; // this variable will be counting all instances and shared
public:
	User();
	~User();
	int getID() { return ID; }
	static int getCouter() { return counter; }
};

