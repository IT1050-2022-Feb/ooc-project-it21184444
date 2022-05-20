#include <iostream>
#include <cstring>
#include "Booking"
using namespace std;

Booking::Booking()
{
	bookingID = 0;
	customerID = 0;
	packageID = 0;
	strcpy(bookingDate, " ");
}

Booking::Booking(int bID, int cID, int pID, char const bDate[])
{
	bookingID = bID;
	customerID = cID;
	packageID = pID;
	strcpy(bookingDate, bDate);
}

void Booking::book(){}
void Booking::editBookingDetails(){}
void Booking::confirmBook(){}
Booking::~Booking(){}
