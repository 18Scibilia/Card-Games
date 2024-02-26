//Libraries
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Player.h"
#include "Card.h"

using namespace std;
void HANDLE();
void FlushConsoleInputBuffer();
bool hConsole();
bool GetStdHandle();
void STD_OUTPUT_HANDLE();
void Card();
void hand();
void name();
void newHand();

Player::Player(bool, int)
{
	this->hand = newHand;
	this->name = name;
}

void Player::displayHand()
{
	for (int x = 0; x < hand.size(); x++)
	{
		hand[x].displayCard(); //This passes through the hand vector before displaying which card is in it
	}
}

int Player::tallyScore()
{
	int value = 0;
	for (int x = 0; x < hand.size(); x++)
	{
		value += hand[x].getValueInteger();
	}
	return value;
}

void Player::clearPlayer()
{
	hand.clear();
}

string Player::getName()
{
	return name;
}

int Player::GetTotalCards(vector<Card> handCards){
	return handCards.size();
}

void Player::OutputHand() {
	HANDLE; hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	for (int i = 0; i < GetTotalCards(hand); i++) {
		int colour = 7; //This is grey text
	}
	FlushConsoleInputBuffer(hConsole);
}
