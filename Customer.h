class Customer {
	private:
		int customerID;
  

	public:
	Customer();
	Customer(int cID);
	void updateDetails();
	void displayDetails();
	void searchPackages();
	void makePayment();
	void buyPackage();
	void sendFeedback();
	~Customer();
};
