
using namespace std;
//user registation class
class UserRegistration {
	private:
		int nic;
		char userEmail[50];
		char userPassword[15];
  		char name[30];
  		int age;
  		char address[200];
  		char gender[10];
  		char email[50];
	public:
		UserRegistration();
		UserRegistration(const char uuserEmail[],const char uuserPassword[],const char uname[],int uage,const char uAddress[] ,const char ugender[]);
		void displayUserRegistration();
		void registered();
		int getUserId();
		~UserRegistration();
			
};
