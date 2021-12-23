#pragma once
#include "Card.h"
#include "Deck.h"
#include <vector>

//hand class, a vector of cards seperate from the deck vector of cards,

class Hand : public Card
{
private:
	int numOfAces = 0;
	std::vector<Card> hand;
public:
	void drawCard(Card card)
	{
		hand.push_back(card);
	}
	void printHand()
	{
		for (auto& c : hand)
			c.printCard();
	}

	//passes the hand vector by reference to directly access it outside the class
	std::vector<Card>& getHand()
	{
		return hand;
	}

	int getHandWeight()
	{
		int totalWeight = 0;
		for (auto& c : hand)
			totalWeight += c.getWeight();

		return totalWeight;
	}

	//checks to see wether the hand has an ace/aces
	int getAceNum()
	{
		for (auto& c : hand)
			if (c.getRank() == "Ace")
				numOfAces++;
			
		return numOfAces;
	}

};