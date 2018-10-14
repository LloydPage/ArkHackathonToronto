#include "Company.h"
#include "Uprogram.h"
int main()
{
	Company c("Test Comp");
	double  webScoresForC[4]={0,0,0,0};
	c.setWebScore(webScoresForC);
	c.setScore(webScoresForC,4);

}
