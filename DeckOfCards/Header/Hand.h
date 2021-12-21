#pragma once
#include "Card.h"
#include "Deck.h"
#include <vector>

class Hand : public Card
{
private:
	std::vector<Card> hand;
public:
	void drawCard(Card card)
	{
		hand.push_back(card);
	}
	void printHand()
	{
		for (int i = 0; i < hand.size(); i++)
		{
			hand[i].printCard();
		}
	}
	std::vector<Card>& getHand()
	{
		return hand;
	}
};