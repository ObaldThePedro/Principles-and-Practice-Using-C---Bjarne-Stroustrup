#include "std_lib_facilities.h"

int main()
{
	vector<int> number{ 1,2,3,4 };
	vector<int> guessed{};
	int input{};

	//number importance
	int number_0 = number.at(0) * 1000;
	int number_1 = number.at(1) * 100;
	int number_2 = number.at(2) * 10;
	int number_3 = number.at(3) * 1;

	//extract numbers from vector to normal integer
	int number_guessed = number_0 + number_1 + number_2 + number_3;
	
	//bulls and cows initialization
	int bulls{};
	int cows{};

	cout << "Please enter a 4 digit number!\n";
	//while input is not equal to the guess
	while (bulls != number.size())
	{
		cin >> input;
		if (input == number_guessed)
		{
			cout << "Congrats!\n";
		}
		//extract from input integers by index 
		stringstream tmp;
		tmp << input;
		char digi_0 = (tmp.str())[0];
		char digi_1 = (tmp.str())[1];
		char digi_2 = (tmp.str())[2];
		char digi_3 = (tmp.str())[3];

		//convert from char to int
		int d0 = digi_0 - '0';
		int d1 = digi_1 - '0';
		int d2 = digi_2 - '0';
		int d3 = digi_3 - '0';

		//put input integers into vector
		guessed.push_back(d0);
		guessed.push_back(d1);
		guessed.push_back(d2);
		guessed.push_back(d3);

		//reset bulls & cows
		int bulls{0};
		int cows{0};
		//iteration over default key vector
		for (int i{ 0 }; i < number.size(); i++)
		{
			int index{ i };
			for (int j{ 0 }; j < guessed.size(); j++)
			{
				//check if values are equal at same index;
				if (index == j && (guessed[index] == number[i]))
				{
					bulls++;
				}
				else if (guessed[j] == number[i])
				{
					cows++;
				}
			}
		}
		cout << "Bulls: " << bulls << " and Cows: " << cows << endl;
		
		guessed.pop_back();
		guessed.pop_back();
		guessed.pop_back();
		guessed.pop_back();
	}
	return 0;
}
