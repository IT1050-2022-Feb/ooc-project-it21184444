#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "Customer.h"
#include "Feedback.h"
#include "Package.h"
#include "Payment.h"
#include "UserRegistration.h"

using namespace std;
int main() {
	
	int unic;
	char uuserEmail[50];
	char uuserPassword[15];
  	char uname[30];
  	int uage;
  	char uAddress[200];
  	char ugender[10];
  	
  	char tourType[20];
	int daysOfTour;
	int nmbOfSheats;
	int nmbOfBoats;
	char destination[50];
	
	
  	
  	//taking inputs for user registration
	cout<<"----User Registation----"<<endl;
	cout<<"Input your name : ";
	cin>>uname;
	cout<<"Input Age: ";
	cin>>uage;
	cout<<"Input Address : ";
	cin>>uAddress;
	cout<<"Input Gender : ";
	cin>>ugender;
	cout<<"Input Email: ";
	cin>>uuserEmail;
	cout<<"Input password :";
	cin>>uuserPassword;
	cout<<endl;

  	//register user
	UserRegistration* ur=new UserRegistration(uuserEmail,uuserPassword, uname,uage, uAddress ,ugender);
	ur->displayUserRegistration();
	ur->registered();
	
	//creating admin from the user
	Admin* admin=new Admin(ur->getUserId());
	admin->displayAdminDetails();
	admin->addPackage();
	admin->removePackage();
	
	//creating customer from the user (user should be a new one but using the same user)
	Customer* customer = new Customer(ur->getUserId()); 
	customer->displayDetails();
	customer->searchPackages();
	customer->buyPackage();
	customer->makePayment();
	customer->sendFeedback();
	
	
	float price;
	float discount;
	char ipackage[50];
	
	//taking inputs for package registration
	cout<<"----Register Package----"<<endl;
	cout<<"Input Price : ";
	cin>>price;
	cout<<"Input Discount: ";
	cin>>discount;
	cout<<"Input Package Name : ";
	cin>>ipackage;
	cout<<endl;
	
	Package* package = new Package(ur->getUserId(),price,discount,ipackage);
	//calling methods in package object
	
	package->displayprice();
	
	//taking inputs for tour registration
	cout<<"----Tour Registration----"<<endl;
	cout<<"Input Number of Days : ";
	cin>>daysOfTour;
	cout<<"Input Destination: ";
	cin>>destination;
	cout<<"Input Number of SHeets : ";
	cin>>nmbOfSheats;
	cout<<"Input Number of Boats : ";
	cin>>nmbOfBoats;
	cout<<"Input Tour Type : ";
	cin>>tourType;
	cout<<endl;
	
	Tour* tour = new Tour(tourType,daysOfTour,nmbOfSheats,nmbOfBoats,destination);
	
	tour->displayDetails();
	cout<<endl;
	//taking input to create booking Registration
	char date[12];	
	cout<<"----Booking Registration----"<<endl;
	cout<<"Enter Date : ";
	cin>>date;
	cout<<endl;
	
	
	//creating boooking object
	
	Booking* booking = new Booking(rand() % 9000 + 1000,ur->getUserId(),rand() % 9000 + 1000,date);
	
	booking->book();
	booking->confirmBook();
	booking->editBookingDetails();
	
	//creating payment object
	Payment* payment = new Payment(rand() % 9000 + 1000,date,price-discount,rand() % 9000 + 1000);
	cout<<"----payment----"<<endl;
	payment->confirmpayment();
	cout<<endl;
	payment->validatepayment();
	payment->printreceipt();
	
	//taking inputs for feedback
	char message[50];
	cout<<"----Send Feedback----"<<endl;
	cout<<"Enter Message : ";
	cin>>message;
	cout<<endl;
	
	//creating feedback object with taken inputs
	Feedback* feedback = new Feedback(rand() % 9000 + 1000,message,"Hansika Upamali");
	
	feedback->displayFeedback();
	feedback->displayThanks();
	
	delete ur;
	delete admin;
	delete customer;
	delete package;
	delete tour;
	delete booking;
	delete payment;
	delete feedback;

	return 0;
}
