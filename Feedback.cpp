#include <iostream>
#include <cstring>
#include "Feedback.h"
using namespace std;


Feedback ::Feedback(){}

Feedback  ::Feedback(int feedId,const char  msg[],const char sdName[])
{
	feedbkId = feedId; 
	strcpy(feedbkMs,msg);
 	strcpy(senderName,sdName);
}

void Feedback::displayThanks()  {  }
void Feedback::displayFeedback()  {  } 
Feedback :: ~Feedback() { }

