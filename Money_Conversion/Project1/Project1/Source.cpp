#include "std_lib_facilities.h"

int main()
{
	double yen_in_dollars = 0.0090;
	double kroner_in_dollars = 0.15;
	double pound_in_dollars = 1.28;

	double input;
	char currency;

	cout << "Please enter the money amount you would like to convert to dollars, "
		<< "followed by the currency you are using: \n";
	cin >> input >> currency;
	
	switch (currency) {
	case 'k':
		cout << kroner_in_dollars * input;
		break;
	
	case 'y':
		cout << yen_in_dollars * input;
		break;
		
	case 'p':
		cout << pound_in_dollars * input;
		break;

	default:
		cout << "We don't recognize that currency!";
		break;
	}
	
	
	return 0;
}