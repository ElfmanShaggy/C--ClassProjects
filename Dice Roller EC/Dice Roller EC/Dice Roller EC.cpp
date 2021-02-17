// Dice Roller
// Evan Crowley
// 02/17/2021

#include <iostream>
#include <stdlib.h> 
#include <stdio.h>
using namespace std;

int roll(int dice);
int roll();
string intial;

int roll(int die)
{
	int num1 = rand() % die + 1;

	return num1;
}


int roll()
{
	int num2 = rand() % 6 + 1;
	return num2;
}

int main()
{
	string ans;
	int die;

	cout << "Enter a choice (0 = roll, 1 = exit): ";
	cin >> intial;
	
	while (!intial.compare("0"))
	{
		cout << "Quick Roll (y/n)? ";
		cin >> ans;

		if (ans == "y" || ans == "Y")
		{
			cout << "You rolled a " << roll() << endl;
		}
		else if (ans == "n" || ans == "N")
		{
			cout << "How many sides do you want the die to have? ";
			cin >> die;
			cout << "You rolled a " << roll(die) << endl;
		}
		else
		{
			cout << "That is not a valid option.";
		}

		cout << "Enter a choice (0 = roll, 1 = exit): ";
		cin >> intial;
	}
}
