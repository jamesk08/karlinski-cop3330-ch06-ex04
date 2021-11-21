/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 James Karlinski
 */

#include "std_lib_facilities.h"

class NameAndScore
{
	public:
	string name;
	int score;

	NameAndScore() 
	{
		name = ""; 
		score = 0; 
	}

	NameAndScore(string nameParam, int scoreParam) 
	{
		name = nameParam; 
		score = scoreParam; 
	}
};

int main()
{
	string name;
	int score;
	vector<NameAndScore> data;
	cout << "Enter a name and score (or 'No more' to exit):\n";
	while(name != "No more" || name != "no more")
	{
		cout << "Enter a name and score: ";
		cin >> name >> score;
		if (cin.fail()) break;

		for(int i = 0; i < data.size(); i++)
		{
			if(data[i].name == name)
			{
				cout << "Error: '" + name + "' already exists." << endl;
				continue;
			}
		}
		NameAndScore temp(name, score);
		data.push_back(temp);
	}

	for(int i = 0; i < data.size(); i++)
	{
		cout << "People and their scores: " << endl;
		cout << data[i].name << "," << data[i].score << endl;
	}

	// let user read the output and press any key to exit	
	system("pause");
}