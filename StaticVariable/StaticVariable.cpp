// StaticVariable.cpp : Defines the entry point for the console application.
//
// static variables and static methods
// static is modifier - will be shared among all instances of classes. 
//all instances will have same value


#include "stdafx.h"
#include <iostream>
#include "user.h"




int main()
{

	User a[60];
	User b;

	std::cout << a[59].getID() << std::endl; // this will give us 60 as array is counted from 0 
	std::cout << b.getID() << std::endl;
	
	std::cout << "This is a-> " << a->getCouter() << std::endl;

	std::cout << User::getCouter() << std::endl; // we don't need instance of the class if is done this way

	system("pause");
    return 0;
}

