#include "std_lib_facilities.h"

int main()
{
	vector<string> words{};
	int vector_size{ 5 };
	int iterator{ 0 };
	while (iterator < vector_size)
	{
		string add_word{};
		cout << "Please enter a word so I can add it to a vector!\n";
		cin >> add_word;
		words.push_back(add_word);
		iterator++;
	}

	string temp_word{};
	int counter{ 0 };
	string new_word{};
	for (int i{ 0 }; i < words.size(); ++i)
	{
		temp_word = words[i];
		int temp_counter{ 0 };
		for (int j{ 0 }; j < words.size(); ++j)
		{
			if (temp_word == words[j])
			{
				temp_counter++;
			}
			if (temp_counter > counter)
			{
				counter = temp_counter;
				new_word = temp_word;
			}
		}
	}
	cout << new_word << "\t" << counter << endl;
	return 0;
}