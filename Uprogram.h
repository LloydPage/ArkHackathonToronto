class Program{
	private://vars
		float *payRange;
		double percentageEmployed;
		double score;
		float studentImprov;
		char *name;
	public://set and get functions
		Program(char *name);
		void setScore(float wpayRange,double wpercentageEmployed,float wstudentImprov);
		void setStudentImprov(Student pre, Student post);
		void setPercentageEmployed(double data);
		void setPayRange(float *data);
		double getScore();
		char *toString();
};

