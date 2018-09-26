#include "std_lib_facilities.h"

int main()
{
	unsigned int x{};
	double i{ 0 };
	char quit = '|';
	bool stop = false;
	
	cout << "Please enter the numbers you would like to sum up!\n";
	cin >> x;
	vector<double> numbers{};
	double sum{ 0 };


	cout << "Please enter some values to add to a vector!(Enter | to stop!)\n";
	while (!stop)
	{
		cin >> i;
		if (i == 124)
		{
			stop = true;
		}
		else if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Invalid input\n";
		}
		else
			numbers.push_back(i);
	}
	if (numbers.size() < x)
	{
		cerr << "The vector size is smaller than what you requested to calculate!\n";
	}
	for (int j = 0; j < x; j++)
	{
		sum = sum + numbers[j];
	}
	cout << "The sum of numbers is: " << sum << endl;
	
	return 0;
}