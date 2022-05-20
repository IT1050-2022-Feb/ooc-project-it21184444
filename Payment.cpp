#include <iostream>
#include <cstring>
#include "Payment.h"
using namespace std;

Payment::Payment(){
	paymentID = 0;
	strcpy(date,"");
	amount = 0.0;
	bookingId = 0;
}
Payment::Payment(int ppaymentID,const char pdate[],float pamount,int bookingID)

{
	strcpy(date,pdate);
	paymentID= ppaymentID;
	amount = pamount;
	bookingId=bookingID;
	
}
void Payment::confirmpayment()
{
	cout<<"paymentID:"<< paymentID<<endl;
	cout<<"total amunt : "<<amount<<endl;
}
void Payment::validatepayment(){
}
void Payment::printreceipt(){
}


Payment::~Payment(){}
