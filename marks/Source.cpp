#include <iostream>
using namespace std;

class AcademicPerformance
{
	int size = 10;
	double* markArr;
public:
	AcademicPerformance()
	{
		markArr = nullptr;
	}

	void Programm()
	{
		int average;
		int newMark;
		int choise;
		cout << "Enter the operation: " << endl;
		cout << "1 - Enter the marks" << endl;
		cout << "2 - Show your marks" << endl;
		cout << "3 - Rewrite marks" << endl;
		cout << "4 - Show if you have a scholarship" << endl;
		cout << "5 - Sort your array" << endl;
		cin >> choise;

		switch (choise)
		{

		default:
			break;
		}
	}
};

int main()
{

}