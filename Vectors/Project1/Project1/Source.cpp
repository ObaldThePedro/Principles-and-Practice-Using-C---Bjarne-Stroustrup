#include "std_lib_facilities.h"

int main()
{
	vector<double> temperatures;

	cout << "Please enter the temperatures to calculate the mean!\n";
	for (double temp; cin >> temp;)
	{
		temperatures.push_back(temp);
	}
	
	double sum{ 0 };
	double average{};
	
	//compute median temperatures
	for (double x : temperatures)
	{
		sum += x;
	}
	average = sum / temperatures.size();
	cout << average << endl;

	//compute mean temperatures
	sort(temperatures);
	
	cout << "The mean temperature is " << temperatures[temperatures.size() / 2];
}