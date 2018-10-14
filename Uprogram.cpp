#include "Student.h"
class Program{
	private://vars
		float *payRange;
		double percentageEmployed;
		double score;
		float studentImprov;
		char *name;
	public://set and get functions
		Program(char *name){
			this->name=name;
		}
		void setScore(float wpayRange,double wpercentageEmployed,float wstudentImprov){
			score=wpayRange+wpercentageEmployed+wstudentImprov;
		}//Assuming will be fed weighted values
		void setStudentImprov(Student pre, Student post){
			studentImprov=pre.getScore()-post.getScore();
		}
		void setPercentageEmployed(double data){
			percentageEmployed=data;
		}
		void setPayRange(float *data){
			payRange=data;
		}
		double getScore(){
			return score;
		}
		char *toString(){
			return name;//add in score later
		}
};


