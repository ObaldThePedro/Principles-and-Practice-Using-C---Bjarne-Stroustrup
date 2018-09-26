#include "std_lib_facilities.h"

int main()
{
	//vector creation
	vector<int> numbers{};
	cout << "What is the maximum number?\n";
	int limit{};
	cin >> limit;

	double square_root{ sqrt(limit) };

	//iteration through length of 50
	for (int i = 0; i <= limit; i++)
	{
		//0 and 1 are not prime numbers
		if (i == 0 || i == 1)
		{
			numbers.push_back(false);
		}
		//set the rest numbers to prime (true)
		else
			numbers.push_back(true);
	}
	for (int i = 2; i <= square_root; i++)
	{
		if (numbers[i])
		{
			cout << i << endl;
		}
		for (int j = i + i; j <= limit; j += i)
		{
			numbers.at(j) = false;
		}
	}
	for (int i = square_root + 1; i <= limit; i++)
	{
		if (numbers[i])
		{
			cout << i << endl;
		}
	}
}