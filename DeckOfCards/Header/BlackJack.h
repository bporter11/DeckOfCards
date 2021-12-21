#pragma once
#include "Deck.h"
#include "Card.h"
#include "Hand.h"
class BlackJack : public Deck
{
private:
	int wins;
	int losses;
	Hand dealerHand;
	Hand playerHand;

public:

	//Initializes player/dealer hand with 2 cards each
	void InitDealerHand()
	{
		dealerHand.drawCard(drawCardfromTop());
		dealerHand.drawCard(drawCardfromTop());
	}
	void InitPlayerHand()
	{
		playerHand.drawCard(drawCardfromTop());
		playerHand.drawCard(drawCardfromTop());
	}

	//returns the weight of the hand, eg. 17, 3, etc
	//need to add ace functionality
	int getDealerWeight()
	{
		int totalWeight = 0;
		for (auto& c : dealerHand.getHand())
		{
			totalWeight += c.getWeight();
		}
		return totalWeight;
	}
	int getPlayerWeight()
	{
		int totalWeight = 0;
		for (auto& c : playerHand.getHand())
		{
			totalWeight += c.getWeight();
		}
		return totalWeight;
	}
	void checkSpecialMoves()
	{
		//checks to see if elgible to split,double down
	}
	bool checkBust()
	{
		//determine if 
	}
	void playerHit()
	{
		//check bust, check aces, check special moves //stand
	}
	void dealerHit()
	{
		//implement dealer rules
	}
	void handleAces()
	{
		//determines if an ace should be 11 or 1
	}

	//self explanatory
	void printDealerHand()
	{
		dealerHand.printHand();
	}
	void printPlayerHand()
	{
		playerHand.printHand();
	}

};