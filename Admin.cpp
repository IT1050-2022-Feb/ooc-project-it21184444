#include <iostream>
#include <cstring>
#include "Admin"
using namespace std;

Admin::Admin() // Default constructor
{
	adminID = 0;
}

Admin::Admin(int aID) // Overload constructor
{
	adminID = aID;
}
void Admin::displayAdminDetails() // Method
{
	
}

void Admin::addPackage() // Method
{

}

void Admin::removePackage() // Method
{

}
Admin::~Admin(){
}
