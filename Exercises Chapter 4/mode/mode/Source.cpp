#include "std_lib_facilities.h"

int main()
{

	vector<int> numbers{ 1,2,2,4,4,4,4,4,4,4,4,4,4,4,4,5,6,6,6,6,6,6,7,8 };
	int element{ 0 };
	int counter{ 0 };
	int temp{ 0 };
	

	for (int i = 0; i < numbers.size(); i++)
	{
		temp = numbers[i];
		int temp_counter{ 0 };
		for (int j = 0; j < numbers.size(); j++)
		{
			if (numbers[j] == temp)
			{
				++temp_counter;
			}
			if (temp_counter > counter)
			{
				element = temp;
				counter = temp_counter;
			}
		}
	}
	
	cout << element << "\t" << counter << endl;
	return 0;
}