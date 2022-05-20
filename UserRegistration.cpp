#include "UserRegistration"
#include <iostream>
#include <cstring>
using namespace std;

UserRegistration::UserRegistration(){
	strcpy(userEmail,"");
	strcpy(userPassword,"");
	nic = 0;
	strcpy(name,"");
	age=0;
	strcpy(address,"");
	strcpy(gender,"");

}
UserRegistration::UserRegistration(const char uuserEmail[],const char uuserPassword[],const char uname[],int uage,const char uAddress[] ,const char ugender[])
{
	strcpy(userEmail,uuserEmail);
	strcpy(userPassword,uuserPassword);
	nic = rand() % 9000 + 1000;
	strcpy(name,uname);
	age=uage;
	strcpy(address,uAddress);
	strcpy(gender,ugender);
}
void UserRegistration::displayUserRegistration()
{
	
}
int UserRegistration::getUserId(){
	return nic;
}
void UserRegistration::registered(){}
UserRegistration::~UserRegistration(){
}

