#include "Student.h"
class Company{
	private:
		double score;
		double *webScore;
		float* offeredPay;//may make more sense to make distribution than a single value
		char **names;// idk how to weigh this
		double* studentScore; // a single value for a distribution is probably a poor idea
		int s1,s2,s3;//size of the 3 pointers above it
		char *name;
		public:
		Company (char *name);
		void setScore(double *wwebScore, int size);		
		void setWebScore(double *data);
		void setOfferedPay(float* data);
		void setStudentScore(double* data);
		void setPrograms(char **names);//possibly use as a weight in and of itself?
		double getScore();
		double fit(Student s,double w1,double w2,double w3);
		double fitcalc(double d1, double d2, double d3);
	};
