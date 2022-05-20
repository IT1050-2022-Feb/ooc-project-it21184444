class Payment
{
	private:
		int paymentID;
		char date[20];
		float amount;
		int bookingId;
		
	public:
		void printreceipt();
		void validatepayment();
		Payment();
		Payment(int ppaymentID,const char pdate[],float pamount,int bookingId);
		void confirmpayment();
		~ Payment();
};

