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
	int getDealerWeight(int gameStatus)
	{
		//input 1 if still playing hand
		//intput 0 if end of hand
		int weight = 0;
		if (gameStatus == 1)
		{
			for (int i = 0; i < dealerHand.getHand().size() - 1; i++)
			{
				weight += dealerHand.getHand().at(i).getWeight();
			}
			return weight;
		}
		else
		{
			return dealerHand.getHandWeight();
		}
		
	}
	int getPlayerWeight()
	{
		return playerHand.getHandWeight();
	}


	void checkSpecialMoves()
	{
		//checks to see if elgible to split,double down
	}
	bool checkPlayerBust()
	{
		return playerHand.getHandWeight() > 21;
	}
	bool checkDealerBust()
	{
		return dealerHand.getHandWeight() > 21;

	}
	void playerHit()
	{
		
		playerHand.drawCard(drawCardfromTop());
		
		//check bust, check aces, check special moves //stand
	}
	void dealerHit()
	{
		//implement dealer rules
	}

	//determines if an ace should be 11 or 1
	void handlePlayerAces()
	{

	}

	int winLossPush()
	{
		//return 1 for dealer win
		//return 2 for player win
		//return 3 for push
		if (dealerHand.getHandWeight() > playerHand.getHandWeight())
			return 1;
		else if (dealerHand.getHandWeight() < playerHand.getHandWeight())
			return 2;
		else
			return 3;
	}

	void printRules()
	{
		std::cout << "Welcome to BlackJack!" << std::endl;
		std::cout << std::string(50, '-') << std::endl;
		std::cout << "\t" << "#Rules#" << std::endl;
		std::cout << "1. Player and Dealer are both dealt 2 cards to begin"  << std::endl;
		std::cout << "2. The goal of the game is to get the cloest to 21 without going over" << std::endl;
		std::cout << "3. Dealer hits on everything under 17, including soft 17's" << std::endl;
		std::cout << "4. Follow the prompts to double down, split, hit or stand"  << std::endl;
		std::cout << "5. Have fun!" << std::endl;
		std::cout << std::string(50, '-') << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;

		//prints the rules of the game as well as introduction
	}

	void printWinsLosses()
	{
		//prints total wins and losses in the game with accompanied percantages
	}

	int getWins()
	{
		return wins;
	}

	void incrementWins()
	{
		wins++;
	}

	int getLosses()
	{
		return losses;
	}

	void incrementLosses()
	{
		losses++;
	}


	//self explanatory
	void printDealerHand(int gameStatus)
	{
		//input 1 if still playing hand
		//intput 2 if end of hand
		if (gameStatus == 1)
		{
			int dealerHandSize = dealerHand.getHand().size();
			int dealerHandWeight = 0;
			std::cout << "Dealers Hand" << std::endl;
			std::cout << "----------------------------" << std::endl;
			for (int i = 0; i < dealerHandSize - 1; i++)
			{
				dealerHand.getHand().at(i).printCard();
				dealerHandWeight += dealerHand.getHand().at(i).getWeight();
			}
			std::cout << dealerHandWeight << std::endl;
			std::cout << "----------------------------" << std::endl;
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Dealers Hand" << std::endl;
			std::cout << "----------------------------" << std::endl;
			dealerHand.printHand();
			std::cout << dealerHand.getHandWeight() << std::endl;
			std::cout << "----------------------------" << std::endl;
			std::cout << std::endl;
		}
	}
	void printPlayerHand()
	{
		std::cout << "Players Hand" << std::endl;
		std::cout << "----------------------------" << std::endl;
		playerHand.printHand();
		std::cout << playerHand.getHandWeight() << std::endl;
		std::cout << "----------------------------" << std::endl;
		std::cout << std::endl;
	}

	bool checkPlayerBlackJack()
	{
		//checks to see if the hand contains a black else
		//ace + 10
	}

	bool checkDealerBlackJack()
	{
		//checks to see if the hand contains a black else
		//ace + 10
	}

};