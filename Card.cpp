
#include <iostream>
#include <string>
#include "Card.h"

using namespace std;

void HANDLE();
Card::Card(int newValueType, int NewValue, int newSuit);
{
	string suit[] = { "Hearts", "Clubs", "Diamonds", "Spades" };
	string type[] = { "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
}

Card::Card(int newValue, char newSuit) {
	value = newValue;
	suit = newSuit;
}

int Card::GetValue() {
	return value;
}
int Card::SetValue(int newValue) {
	value = newValue;
}
char Card::GetSuit() {
	return suit;
}
void Card::SetSuit(char newSuit) {
	suit = newSuit;
}
string Card::Outputcard() {
	HANDLE;
	string(1, suit);
	//return + to_string(value);
}
