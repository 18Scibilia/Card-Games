#pragma once
#include <string>
#include <queue>

using namespace std;

class Card
{
private:
	int value;
	char suit;
	void Draw();
	void Discard();
public:
	enum SuitNames : char 
	{ 
		Diamond = 'D', 
		Spade = 'S', 
		Heart = 'H', 
		Club = 'C', 
		Ace = 'A', 
		Joker = 'JO', 
		Jack = 'JA', 
		Queen = 'Q',
		King = 'K', 
	};
	//These are the 4 different card suits that are found in a pack of cards, along with the special cards. 
	//With Both Joker and Jack beginning in the letter J, I decided to add in the second letter of each name to avoid confusion.
	Card(int newValue, char newSuit); 
	void Setup();
	void Shuffle();
	int GetValue();
	int SetValue(int newValue);
	void SetSuit();
	char GetSuit();
	void SetSuit(char newSuit);
	string Outputcard();
};

