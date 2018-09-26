#include "std_lib_facilities.h"

int main()
{
	vector<double> distances;
	double sum{ 0 };
	double smallest{ 0 };
	double largest{ 0 };

	cout << "Please enter the possible distances between two neighboring cities!" << endl;
	for (double distance; cin >> distance;)
	{
		distances.push_back(distance);
	}
	smallest = distances.at(0);
	largest = distances.at(0);
	
	for (int i{ 0 }; i < distances.size(); ++i)
	{	
		sum += distances.at(i);
		if (distances.at(i) < smallest)
		{
			smallest = distances.at(i);
		}
		if (distances.at(i) > largest)
		{
			largest = distances.at(i);
		}
	}
	cout << sum << endl;
	cout << "The smallest distance between two neighboring cities is " << smallest << "\n";
	cout << "The largest distance between two neighboring cities is " << largest << "\n";
	return 0;
}