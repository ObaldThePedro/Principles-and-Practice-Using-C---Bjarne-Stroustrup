#include "std_lib_facilities.h"

int main() {
	bool isValidInput = true;
	double number;
	string input;
	vector <double> values;
	double sum = 0;
	int counter = 0;
	
	cout << "Please enter a number with the respesctive unit!\n";
	while (isValidInput) 
	{
		cin >> number >> input;
		if (input == "cm")
		{
			double conversion_to_meters;
			conversion_to_meters = number / 100;
			input = "m";
			values.push_back(conversion_to_meters);
			sum += conversion_to_meters;
			++counter;
		}
		else if (input == "m")
		{
			values.push_back(number);
			sum += number;
			++counter;
		}
		else if (input == "in")
		{
			double conversion_to_cm;
			double conversion_to_m;
			conversion_to_cm = number * 2.54;
			conversion_to_m = conversion_to_cm / 100;
			input = "m";
			values.push_back(conversion_to_m);
			sum += conversion_to_m;
			++counter;
		}
		else if (input == "ft")
		{
			double conversion_to_in;
			conversion_to_in = number * 12;
			double conversion_to_cm;
			conversion_to_cm = conversion_to_in * 2.54;
			double conversion_to_m;
			conversion_to_m = conversion_to_cm / 100;
			input = "m";
			values.push_back(conversion_to_m);
			sum += conversion_to_m;
			++counter;
		}
		else
		{
			cout << "Invalid representation!\n";
			cout << "You added " << counter << " units!" << endl;
			sort(values);
			for (int i{ 0 }; i < values.size(); ++i)
			{
				cout << values.at(i) << "m" << "\n";
			}
			isValidInput = false;
		}
		if(isValidInput)
		cout << "Please enter a number with the respesctive unit!\n";
	}
	
	return 0;
}