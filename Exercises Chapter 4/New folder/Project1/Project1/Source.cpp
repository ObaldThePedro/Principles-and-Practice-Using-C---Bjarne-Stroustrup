#include "std_lib_facilities.h"
#include <cstdlib>
#include <ctime>

vector<string> words{ "Rock", "Paper", "Scissors" };
int number_generator()
{
	srand((int)time(0));
	int i{ 0 };
	while (++i < 2)
	{
		int r = (rand() % 3) + 0;
		return r;
	}
}
// r= 82 p=80 s=83
string pickWord(int r)
{
	string picked_word = words.at(r);
	return picked_word;	
}

string answer()
{
	cout << "Rock,Paper or Scissors?\n";
	string guess;
	cin >> guess;
	return guess;
}

bool isValidAnswer()
{
	for (int i{ 0 }; i < words.size(); ++i)
	{
		if (answer() != words.at(i))
		{
			cout << "Sorry, that is not a valid answer!\n";
			return false;
		}
		else
		{
			return true;
		}
	}
}

bool isGameWon()
{
	string machine_guess = pickWord(number_generator());
	cout << machine_guess << endl;
	if (isValidAnswer())
	{
		if (machine_guess == answer())
		{
			cout << "We have a draw!\n";
			return false;
		}
		else if (machine_guess == words.at(0) && answer() == words.at(1))
		{
			cout << "Paper wins - Rock looses!\n";
			return true;
		}
		else if (machine_guess == words.at(0) && answer() == words.at(2))
		{
			cout << "Rock wins - Scissors looses!\n";
			return true;
		}
		else if (machine_guess == words.at(1) && answer() == words.at(0))
		{
			cout << "Paper wins - Rock looses!\n";
			return true;
		}
		else if (machine_guess == words.at(1) && answer() == words.at(2))
		{
			cout << "Scissors wins - Paper looses!\n";
			return true;
		}
		else {
			cout << "nz\n";
			return false;
		}
	}
}


int main()
{

	isGameWon();
	return 0;
}