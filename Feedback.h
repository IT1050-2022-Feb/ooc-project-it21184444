class Feedback {
	private:
	int feedbkId;
	char feedbkMs[100]; 
	char senderName[10];
	
public:
	Feedback();
	Feedback(int feedId, const char msg[], const char sdName[]); 
	void  displayThanks();
	void  displayFeedback();
	~Feedback();
};
