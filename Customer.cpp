#include <iostream>
#include "Customer.h"
using namespace std;

Customer::Customer() {
  customerID = 0;
  
}

Customer::Customer(int cID) {
  customerID = cID;
  
}

void Customer::updateDetails() {}
void Customer::displayDetails() {}
void Customer::searchPackages() {}
void Customer::makePayment() {}
void Customer::buyPackage() {}
void Customer::sendFeedback() {}
Customer::~Customer() {}
