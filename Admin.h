class Admin 
{
	private : // Attributies
	
	int adminID;
//	Report* RPT; //An object of Report as attribute
	
	public : // Methods
	Admin();
	Admin(int aID);
	void displayAdminDetails();
	void addPackage();
	void removePackage();
	~Admin();
};
