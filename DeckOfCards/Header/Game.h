#pragma once
#include "BlackJack.h"

class Game : public BlackJack
{
private:
	bool gameState = true;
public:
	Game() {}
	void playGame()
	{

		BlackJack myGame = BlackJack();
		myGame.shuffleDeck();
		myGame.shuffleDeck();

		//plays through one single deck of cards
		int games = 0;
		while (gameState)
		{
			//print rules and introduction
			if (games <= 0)
				myGame.printRules();

			//plays through one hand of blackjack
			bool inGame = true;
			while (inGame)
			{
				myGame.InitDealerHand();
				myGame.InitPlayerHand();

				myGame.printDealerHand(1);
				myGame.printPlayerHand();

				//plays through the hitting and standing part of the hand
				bool doneHitting = false;
				while (!doneHitting && myGame.checkPlayerBust())

				inGame = false;
				gameState = false;
			}
		}
	}
};