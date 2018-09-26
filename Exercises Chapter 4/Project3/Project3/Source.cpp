#include "std_lib_facilities.h"

int main()
{
	vector<string> values{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
	vector<int> numbers{0,1,2,3,4,5,6,7,8,9};

	string input{};
	cout << "Please enter a number in string form, so it can be converted into a number!\n";
	cin >> input;
	for (int i{ 0 }; i < values.size(); ++i)
	{
		if (input == values.at(i))
		{
			cout << "The input " << input << " gives the output " << numbers.at(i);
		}
	}
}