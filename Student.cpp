class pastWork
{
	private://If time permits, add updating functions
		char *name;
		char **description;
		double score;
	public:
		pastWork(char *name, char **description){
			this->name=name;
			this->description=description;
		}
		void setScore(int wname, int *wdescription, int size){
		int s=wname;
		for(int i=0;i<size;i++)
			s=s+wdescription[i];
		score=s;
		}
		double getScore(){
		return score;
		}
};
class Student{
	private://If time permits, add updating functions
		double score;
		char* Program;
		float GPA;
		char **courses;
		char **clubs;
		char **Achievements;
		float requestedPay;
		pastWork *past;//includes volunteering, projects.
	public:
		Student(char *Program, float GPA, char **courses, char **clubs, char **Achievements, float requestedPay, pastWork *past){
			this->Program=Program;
			this->GPA=GPA;
			this->courses=courses;
			this->clubs=clubs;
			this->Achievements=Achievements;
			this->requestedPay=requestedPay;
			this->past=past;
		}
		void setScore(int wProgram, float wGPA, int *wcourses, int *wclubs, int *wAchievements, float wrequestedPay, pastWork *wpast, int s1, int s2, int s3, int s4){// s-parameterrs are lenghts of the pointers
		int s=wProgram+wGPA;
		for(int i=0;i<s1;i++)
			s=s+wcourses[i];
		for(int i=0;i<s2;i++)
			s=s+wclubs[i];
		for(int i=0;i<s3;i++)
			s=s+wAchievements[i];
		s=s+wrequestedPay;
		for(int i=0;i<s4;i++)	
			s=s+wpast[i].getScore();
		score=s;
		}
		double getScore(){
		return score;
		}
		char* getProgram(){
		return Program;
		}
		double getRequestPay(){
		return requestedPay;
		}
};
