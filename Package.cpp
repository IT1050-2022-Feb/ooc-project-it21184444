#include <iostream>
#include <cstring>
#include "Package.h"
using namespace std;

Package::Package(int ccustomerID,float cprice,float cdiscount,const char cpackagename[])
{
	packageID = rand() % 9000 + 1000;
	customerID = ccustomerID;
	price = cprice;
	discount = cdiscount;
	strcpy(packagename,cpackagename); 	
}

void Package::displayprice()
{
	
}
int Package::getPackageId(){
	return packageID;
}

Package::~Package(){}


