//Tour class

class Tour {
	private:
		char tourType[20];
		int daysOfTour;
		int nmbOfSheats;
		int nmbOfBoats;
		char destination[50];
	public:
		Tour();
		Tour(const char ttourType[20], int tdaysOfTour, int tnmbOfSheats, int tnmbOfBoats, const char tdestination[50]);
		void displayDetails();
	
};
using namespace std;
Tour::Tour(){
	
}
Tour::Tour(const char ttourType[20], int tdaysOfTour, int tnmbOfSheats, int tnmbOfBoats,const char tdestination[50])
{
	cout<<"Details Of Tour" <<" "<<endl<<endl;
	strcpy(tourType,ttourType);
	daysOfTour=tdaysOfTour;
	nmbOfSheats=tnmbOfSheats;
	nmbOfBoats=tnmbOfBoats;
	strcpy(destination,tdestination);
	

}
void Tour::displayDetails()
{
	cout<<"Tour Type:"<<tourType <<endl;

	cout<<"Days of Tour:" <<daysOfTour<<endl;
	
	cout<<"Number of Sheats:"<<nmbOfSheats <<endl;

	cout<<"Number of Boats:" <<nmbOfBoats<<endl;

	cout<<"Destination:"<<destination <<endl;
	
		
}
 
 
