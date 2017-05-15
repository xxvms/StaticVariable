#include "stdafx.h"
#include "user.h"

int User::counter = 0; //this is initialization of our counter

User::User()
{
	ID = 0;
	counter++; // we are increasing counter and each time 
	ID = counter; // we assigne value of counter to the ID

}


User::~User()
{
}
