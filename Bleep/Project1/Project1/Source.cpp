#include "std_lib_facilities.h"

int main()
{
	vector<string> dislike{ "brocolli", "potatoes", "beans" };
	vector<string> words{};
	
	cout << "Please enter some words!\n";
	for (string word; cin >> word;)
	{
		words.push_back(word);
	}
	
	for (int i{ 0 }; i < words.size(); ++i)
	{
		for (string word : dislike)
		{
			if (words[i] == word)
			{
				cout << "Bleep!\n";
			}
		}
		cout << words[i] << "\n";
	}
}