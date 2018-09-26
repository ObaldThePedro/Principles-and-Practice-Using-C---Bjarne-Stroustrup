#include "std_lib_facilities.h"
//alphabetical print names
int main()
{
	string input1, input2, input3;
	cout << "Enter a name: \n";
	cin >> input1 >> input2 >> input3;
	string lower_alpha;
	string middle_alpha;
	string big_alpha;
	if (input1.at(0) <= input2.at(0))
	{
		lower_alpha = input1;
		if (input2.at(0) <= input3.at(0))
		{
			middle_alpha = input2;
			big_alpha = input3;
		}
		else
		{
			middle_alpha = input3;
			big_alpha = input2;
		}
	}
	else if (input2.at(0) <= input3.at(0))
	{
		lower_alpha = input2;
		if (input1.at(0) <= input3.at(0))
		{
			middle_alpha = input1;
			big_alpha = input3;
		}
		else
		{
			middle_alpha = input3;
			big_alpha = input1;
		}
	}
	else
	{
		lower_alpha = input3;
		if (input2.at(0) <= input1.at(0))
		{
			middle_alpha = input1;
			big_alpha = input2;
		}
	}

	cout << lower_alpha << "," << middle_alpha << "," << big_alpha;
	return 0;
}