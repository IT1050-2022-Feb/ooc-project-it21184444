class Booking
{
	private:
		int bookingID;
		int customerID;
		int packageID;
		char bookingDate[10];

	public:
		Booking();
		Booking(int bID, int cID, int pID, char const bDate[]);
		void book();
		void editBookingDetails();
		void confirmBook();
		~Booking();
};
