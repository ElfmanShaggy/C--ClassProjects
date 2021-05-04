// Evan Crowley
// Dice Challenge
// 04/27/2021

#include<iostream>
#include<ctime>
#include<cstdlib>
#include<random>
#include<Windows.h>
using namespace std;

int getRandomNum();

int main()
{
	char playGame = 'X';
	char gameChoice = 'X';
	char playerChoice = 'X';
	int randInteger = 0;
	int roll = 0;
	int score = 0;

	cout << "## IT'S GAME TIME ##\n" << endl;

	cout << "Would You Like To Play A Game? (Y/N): " << endl;
	cin >> playGame;
	playGame = (toupper(playGame));

	if (playGame == 'Y')
	{
		cout << "Fantastic! What Would You Like To Play Today?\n  P for PIG\n  B for BLACKJACK\n\n  E to EXIT\n" << endl;
		cin >> gameChoice;
		gameChoice = (toupper(gameChoice));
	}
	else
	{
		cout << "We Can Play Another Day... Goodbye!" << endl;
	}

	if (gameChoice == 'P')
	{
		cout << "\WOOHOO!! You Have Chosen To Play Pig! Let's Get Started!" << endl;
		system("pause");
		system("cls");
		cout << "PIG\n\n";
		cout << "Directions:\n\nTwo players race to reach 100 points.\n Each turn, a player repeatedly rolls a die until either a 1 (Pig) is rolled or the player chooses to hold.\n If a player rolls a pig, they score 0 points for that turn.\n If a player holds, they score the sum of the rolls for that turn.\n\n     LET'S GET STARTED!!\n" << endl;
	}
	else if (gameChoice == 'B')
	{
		cout << "\WOOHOO!! You Have Chosen To Play Blackjack! Let's Get Started!" << endl;
		system("pause");
		system("cls");
		cout << "BLACKJACK\n\n";
		cout << "Directions:\n\nThe game is played using a 10 sided dice.\n The dice numbers are 0-9.\n Each player takes a turn rolling two die adding up the numbers (rolling a 0 adds 10 points to the total).\n After the initial roll of two dice, a player may choose to roll an additional die as many times as they wish, adding the resulting number from each roll to their total.\n If the total exceeds 21, the player goes bust and loses that hand even if the computer goes bust too.\n" << endl;
	}
	else if (gameChoice == 'E')
	{
		cout << "Thanks For Playing, Let's Play Again Soon!" << endl;
		system("pause");
		return 0;
	}

	while (gameChoice == 'P')
	{
		cout << "It Is Your Turn: Roll The Dice (R) or Hold Your Turn (H):";
		cin >> playerChoice;
		playerChoice = (toupper(playerChoice));

		if (playerChoice == 'R')
		{
			roll = getRandomNum();
			cout << "I Rolled a " << roll << endl;
			score += roll;
			cout << "My Score is: " << score << endl;
		}
		if (roll == 1)
		{
			cout << "I Rolled A PIG! Ending Player Turn." << endl;
			break;
		}
		if (playerChoice == 'H')
		{
			break;
		}
	}
	system("pause");
	return 0;
}

int getRandomNum()
{
	int randInteger;
	srand(static_cast<int>(time(0)));
	randInteger = (int)(1 + rand() % (6 - 1 + 1));

	return randInteger;
}