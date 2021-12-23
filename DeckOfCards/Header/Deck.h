#pragma once
#include <vector>
#include <time.h>
#include "Card.h"

class Deck
{
private:
	std::vector<Card>* deck = new std::vector<Card>;
public:

	//constructs a vector of sorted cards
	Deck()
	{
		//can do modulo math instead of these variables
		int suitCounter = 1;
		int rankCounter = 1;
		std::string rank = "Spades";
		for (int i = 0; i < 52; i++)
		{
			Card newCard = Card();
			switch (rankCounter)
			{
			case 1:
				newCard.setRank("Ace");
				newCard.setSuit(rank);
				break;
			case 2:
				newCard.setRank("Two");
				newCard.setSuit(rank);
				break;
			case 3:
				newCard.setRank("Three");
				newCard.setSuit(rank);
				break;
			case 4:
				newCard.setRank("Four");
				newCard.setSuit(rank);
				break;
			case 5:
				newCard.setRank("Five");
				newCard.setSuit(rank);
				break;
			case 6:
				newCard.setRank("Six");
				newCard.setSuit(rank);
				break;
			case 7:
				newCard.setRank("Seven");
				newCard.setSuit(rank);
				break;
			case 8:
				newCard.setRank("Eight");
				newCard.setSuit(rank);
				break;
			case 9:
				newCard.setRank("Nine");
				newCard.setSuit(rank);
				break;
			case 10:
				newCard.setRank("Ten");
				newCard.setSuit(rank);
				break;
			case 11:
				newCard.setRank("Jack");
				newCard.setSuit(rank);
				break;
			case 12:
				newCard.setRank("Queen");
				newCard.setSuit(rank);
				break;
			case 13:
				newCard.setRank("King");
				newCard.setSuit(rank);
				break;
			}
			rankCounter++;

			deck->push_back(newCard);


			if (rankCounter == 14)
			{
				rankCounter = 1;
				suitCounter++;
				if (suitCounter == 2)
					rank = "Clubs";
				else if (suitCounter == 3)
					rank = "Diamonds";
				else
					rank = "Hearts";
			}
		}
	}
	void printDeck()
	{
		std::vector<Card>::iterator it = deck->begin();
		for (it; it != deck->end(); it++)
			it->printCard();
	}

	//prints how many cards in the deck
	void printDeckSize()
	{
		std::cout << deck->size() << std::endl;
	}


	//shuffles the deck using system time to randomize the shuffle
	void shuffleDeck()
	{
		Card cardOne = Card();
		Card cardTwo = Card();
		time_t rawtime;
		time(&rawtime);

		int vIndex = 0;
		for (int i = 0; i < rawtime % 10000; i++)
		{
			int num = rand() % 51 + 1;
			cardOne = deck->at(vIndex);
			cardTwo = deck->at(num);
			deck->at(vIndex) = cardTwo;
			deck->at(num) = cardOne;
			vIndex++;
			if (vIndex > 51)
				vIndex = 0;

		}
	}

	//draws a card from the top and then erases it from the vector (deck)
	Card drawCardfromTop()
	{
		Card temp = Card();
		temp = deck->at(0);
		deck->erase(deck->begin());
		return temp;
	}
};