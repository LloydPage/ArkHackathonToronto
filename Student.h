class pastWork
{
	private://If time permits, add updating functions
		char *name;
		char **description;
		double score;
	public:
		pastWork(char *name, char **description);
		void setScore(int wname, int *wdescription, int size);
		double getScore();
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
		Student(char *Program, float GPA, char **courses, char **clubs, char **Achievements, float requestedPay, pastWork *past);
		void setScore(int wProgram, float wGPA, int *wcourses, int *wclubs, int *wAchievements, float wrequestedPay, pastWork *wpast, int s1, int s2, int s3, int s4);
		double getScore();
		char* getProgram();
		double getRequestPay();
};
