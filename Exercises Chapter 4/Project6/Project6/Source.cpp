#include "std_lib_facilities.h"

int main()
{
	vector<string> names{};
	vector<int> scores{};
	string name{};
	int score{};
	string terminate{ "NoName" };

	cout << "Please enter a name followed by a score!\n";
	while (cin >> name >> score && name != terminate)
	{
		for (int i{ 0 }; i < names.size(); i++)
		{
			if (name == names[i])
			{
				cout << ":D\n";
			}
		}
		names.push_back(name);
		scores.push_back(score);
		cout << "Please enter a name followed by a score!\n";
	}
	return 0;
}