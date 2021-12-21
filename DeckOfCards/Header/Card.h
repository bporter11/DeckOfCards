#pragma once
#include <iostream>

class Card
{
private:
	//can use pairs instead of two seperate variables
	std::string rank;
	std::string suit;
public:
	Card() {}

	//overloaded constructor, creates a new card object
	Card(std::string newRank, std::string newSuit)
	{
		rank = newRank;
		suit = newSuit;
	}

	//setters
	void setRank(std::string newRank)
	{
		rank = newRank;
	}
	void setSuit(std::string newSuit)
	{
		suit = newSuit;
	}

	//getters, returns a string
	std::string getRank() const
	{
		return rank;
	}
	std::string getSuit() const
	{
		return suit;
	}

	//print
	void printCard()
	{
		std::cout << rank << " of " << suit << std::endl;
	}

	//uses rank of current card to determine its corresponding number value
	int getWeight()
	{
		if (rank == "Ace")
			return 1;
		else if (rank == "Two")
			return 2;
		else if (rank == "Three")
			return 3;
		else if (rank == "Four")
			return 4;
		else if (rank == "Five")
			return 5;
		else if (rank == "Six")
			return 6;
		else if (rank == "Seven")
			return 7;
		else if (rank == "Eight")
			return 8;
		else if (rank == "Nine")
			return 9;
		else if (rank == "Ten" || rank == "Jack" || rank == "Queen" || rank == "King")
			return 10;
	}
};