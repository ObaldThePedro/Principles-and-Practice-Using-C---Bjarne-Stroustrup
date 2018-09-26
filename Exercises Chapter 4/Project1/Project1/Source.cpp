#include "std_lib_facilities.h"

int main()
{
	vector<double> numbers;
	double middle_element;
	for (double number; cin >> number;)
	{
		numbers.push_back(number);
	}
	sort(numbers);


	//NOTE: DON'T FORGET A VECTOR STARTS AT POSITION 0.
	//if list has odd size
	if (numbers.size() % 2 != 0)
	{
		middle_element = numbers.at(numbers.size() / 2);
		cout << middle_element;
	}
	//if list has even size
	else
	{
		middle_element = (numbers.at(numbers.size() / 2 -1) + numbers.at(numbers.size() / 2)) / 2;
		cout << middle_element;
	}
	
	return 0;
}