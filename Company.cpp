#include "Student.h"
double fitcalc(double d1, double d2, double d3);
class Company{
	private:
		double score;
		double *webScore;//might as well store all parameters.
		float* offeredPay;//may make more sense to make distribution than a single value
		char **names;// idk how to weigh this
		double* studentScore; // a single value for a distribution is probably a poor idea
		int s1,s2,s3;//size of the 3 pointers above it
		char *name;
		public:
		Company (char *name)
		{
			this->name=name;
		}
		void setScore(double *wwebScore, int size){
			int s=0;
			for(int i=0;i<size;i++)
				s=s+wwebScore[i];
			score=s;
		}
		void setWebScore(double *data)
		{
			webScore=data;
		}
		void setOfferedPay(float* data)
		{
			offeredPay=data;
		}
		void setStudentScore(double* data)
		{
			studentScore=data;
		}
		void setPrograms(char **names)//possibly use as a weight in and of itself?
		{
			this->names=names;
		}
		double getScore()
		{
			return score;
		}
		double fit(Student s,double w1,double w2,double w3)
		{
			int count=0;
			for(int i=0;i<s1;i++)
			{
				if(s.getRequestPay()<offeredPay[i])
					count++;
			}
			double avg=(double)count/(double)(s1);//%of people who make more than requested value
			count =0;
			for(int i=0;i<s3;i++)
			{
				if(s.getScore()>studentScore[i])
					count++;
			}
			double avg2= (double)count/(double)s3;//% of people who have a worse student score.
			int T=false;//Is a boolean
			for(int i=0;i<s2;i++)
			{
				int j=0;
				int k=0;
				while((s.getProgram())[j]!='\0'&&names[i][j]!='\0')
				{
					if((s.getProgram())[j]!=names[i][j])
					{
						break;
					}
				}
				if((s.getProgram())[i]=='\0'&&names[i][j]=='\0')
					k=1;
			
				if(k==1)
					T=true;
			return fitcalc(w1*avg,w3*avg2,w2*T);
		}
		}
		double fitcalc(double d1, double d2, double d3)
		{
			return d1+d2+d3;
		}
};

