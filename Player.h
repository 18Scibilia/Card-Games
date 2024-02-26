#pragma once
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
class Player
{
	vector<Card> PlayerHand = {};

public:

	Player();
	vector<Card> GetPlayerHand();
	void EmptyPlayerHand();
	void AddCardToHand(Card& NewCard);
	int GetHandTotal();
	int GetBets();
	//Player(vector<Card> nreHand, string name);
	Player(bool<Card> nreHand, int name);
	void displayHand();
	void hand();
	void name();
	int tallyScore();
	void clearPlayer();
	string getName();
	int GetTotalCards(vector<Card> handCards);
	void OutputHand();
	void OutputFirstHand();
};

