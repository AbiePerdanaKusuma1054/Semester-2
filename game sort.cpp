#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main ()
{
	int iroll1,iroll2,iroll3,iroll4,iroll5;
	double daverage;
	const int No = 5;
	srand(time(0));
	iroll1 = rand() % 6+1;
	iroll2 = rand() % 6+1;
	iroll3 = rand() % 6+1;
	iroll4 = rand() % 6+1;
	iroll5 = rand() % 6+1;
	daverage = (double) (iroll1+iroll2+iroll3+
				iroll4+iroll5)/No;
	cout<<"Number of rolls :"<<No<<endl;
	cout<< setprecision(1)<< setiosflags(ios::fixed);
	cout<<"Average score: "<<daverage;
}
