#include "Blackjack.h"
#include "Card.h"
#include "Player.h"
#include "Deck.h"
#include<random>
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

void PressToContinue();
bool ichar_equals(char a, char b);
bool iequals(const string& a, const string& b);
void OutPutLine();
void Introduction();
//class deck;
//class cards;

int main() {
	//The purpose of this is to change the colour of the text
	//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	bool skip = false;
	cout << "Do you want to check out the intro?\n>[Y] or [N]" << endl;
	string command;
	while (true) {
		cout << ">>";
		getline(cin, command);
		if (iequals(command, "Y") || iequals(command, "YES")) {
			break; //This is the end of the loop
		}
		else if (iequals(command, "N") || iequals(command, "NO")) {
			skip = true;
			break; //This also concludes the loop
		}
		else {
			cout << ">The command cannot be recognized!" << endl;
		}
	}

	if (!skip)
		Introduction();

	//This helps to get the card enums with some more ease
	//Card card = Card();
	int bettedItems = 0;
	Player player = Player(false, 100);
	Player dealer = Player(true, 0);

	bool roundOne = true;
	//This causes the game to repeat when it's finished and you haven't lost
	while (true) {
		cout << "Place your bets now!" << endl;
		cout << "You can bet up to " << player.GetBets() << "Items" << endl;

		//This is where the player input comes in. They cannot have a number be 0 or less or more than the player's amount of betted items
		int input{};

		//This is intended to shuffle the deck
		Deck.Shuffle(Card);

		OutPutLine();
	}
}

void PressToContinue()
{
}

void OutPutLine()
{
	cout << "/n====";
}