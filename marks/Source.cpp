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

	void Init()
	{
		markArr = new double[size];
		for (int i = 0; i < size; i++)
		{
			cout << "Enter your " << i + 1 << " mark:" << endl;
			cin >> markArr[i];
			if (markArr[i] > 12)
			{
				markArr[i] = 1;
			}
		}
	}

	void Print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << markArr[i] << "\t";
		}
		cout << endl;
	}

	void RewriteMark()
	{
		int index;
		double newMark;
		cout << "Enter the number of mark: " << endl;
		cin >> index;
		if (index > size || index < 1)
		{
			cout << "You need to write the mark in range 1 - 10!" << endl;
			return;
		}
		cout << "Enter the new mark: " << endl;
		cin >> newMark;

		if (newMark > 12 || newMark < 1)
		{
			cout << "You need to write the mark from 1 to 12!" << endl;
			return;
		}
		markArr[index - 1] = newMark;
		cout << index << " mark was changed!" << endl;

	}

	void GetScholarship()
	{
		double sum = 0;
		for (int i = 0; i < size; i++)
		{
			sum += markArr[i];
		}
		double average = sum / size;
		if (average >= 10.7)
		{
			cout << "You have a scholarship!" << endl;
		}
		else
		{
			cout << "You  don't have a scholarship!" << endl;
		}
		cout << "Your average mark: " << average << endl;
	}

	void QuickSort(double arr[], int B, int E)
	{
		long i = B, j = E;
		int temp, p;
		p = arr[(B + E) / 2];
		do
		{
			while (arr[i] < p) i++;
			while (arr[j] > p) j--;
			if (i <= j)
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
				i++;
				j--;
			}
		} while (i <= j);

		if (B < j)QuickSort(arr, B, j);
		if (i < E)QuickSort(arr, i, E);
	}

	void Programm()
	{
		int choise;
		while (true)
		{
			cout << "Enter the operation: " << endl;
			cout << "1 - Enter the marks" << endl;
			cout << "2 - Show your marks" << endl;
			cout << "3 - Rewrite marks" << endl;
			cout << "4 - Show if you have a scholarship" << endl;
			cout << "5 - Sort your array" << endl;
			cout << "6 - Exit" << endl;
			cin >> choise;

			switch (choise)
			{
			case 1:
				Init();
				break;
			case 2:
				if (markArr == nullptr)
				{
					cout << "Please enter your marks!" << endl;
				}
				else
				{
					Print();
				}
				break;
			case 3:
				if (markArr == nullptr)
				{
					cout << "Please enter your marks!" << endl;
				}
				else
				{
					RewriteMark();
				}
				break;
			case 4:
				if (markArr == nullptr)
				{
					cout << "Please enter your marks!" << endl;
				}
				else
				{
					GetScholarship();
				}
				break;
			case 5:
				if (markArr == nullptr)
				{
					cout << "Please enter your marks!" << endl;
				}
				else
				{
					QuickSort(markArr,0,size - 1);
					cout << "Array was sorted!" << endl;

				}
				break;
			case 6:
				cout << "Exit" << endl;
				return;
			default:
				cout << "Error!Try again!" << endl;
				break;
			}
		}
	}
};

int main()
{
	AcademicPerformance obj;
	obj.Programm();
}