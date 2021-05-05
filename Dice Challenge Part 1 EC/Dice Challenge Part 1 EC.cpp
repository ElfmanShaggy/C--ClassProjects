// Dice Challenge Part 1 EC.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Player
{
private:
	bool isNPC; // whether or not the player is a computer (npc)
	string name; // the name of the player
	int money; // how much money the player has
	Die dice[2]; // the dice that the player has
public:
	Player(); // instantiated with a random name (chosen from a list of names, defaults to computer controlled)
	Player(string); // instantiated with name, defaults to computer controlled
	Player(string, bool); // constructor if name and npc status passed in
	bool getIsNPC(); // getter for isNPC
	string getName(); // getter for name
	int getMoney(); // getter for money
	void addMoney(int); // adds the amount of money passed into the parameter to the player
	void subtractMoney(int); // subtracts the amount of money passed into the parameter from the player
	Die* getDice(); // returns the starting memory address (the array) of the player's dice
	void rollDice(); // rolls all of the player's dice
	int calcScore(); // calculates the player's score and returns the calculation
};

class Die
{
private:
	int sides; // how many sides the die has
	int value; // the value (what number is showing) on the die
public:
	Die(); // instantiated with 6 sides, value generated randomly
	Die(int); // instantiated with number of sides passed into first parameter, value generated randomly
	Die(int, int); // instantiated with number of sides passed into first parameter and value passed into second parameter
	int getSides() const; // getter for sides
	int getValue() const; // getter for value
	void roll(); // rolls the die (randomly assigns value to the die)
};

int main()
{

}