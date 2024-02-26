//Libraries
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include "Deck.h"
#include "Card.h"

using namespace std;

Deck::Deck(vector<Card> newDeck)
{
	this->deck = newDeck;
}

void Deck::fillDeck()
{
	char suit[] = { 'H', 'C', 'D', 'S' };
	//Having simple letters is quicker than having the full names of the card suits
	for (int x = 0; x <= 12; x++)
	{
		for (int y = 0; y <= 3; y++)
		{
			deck.push_back(Card(x, suit[y]));
		}
	}
}

void Deck::shuffle()
{
	srand(unsigned(time(NULL)));
	//No random is needed here
	random_shuffle(deck.begin(), deck.end());
}

Card Deck::RemoveCard() {
	Card SelectedCard = deck.back();
	//The first card to be taken from the deck
	deck.pop_back();

	return SelectedCard;
}

vector<Card> Deck::GetAllCards() {
	return deck;
}