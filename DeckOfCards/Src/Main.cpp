#include "../Header/Card.h"
#include "../Header/Deck.h"
#include "../Header/Hand.h"
#include "../Header/BlackJack.h"

using namespace std;

int main()
{
	//Deck* myDeck = new Deck();

	BlackJack* newGame = new BlackJack();
	newGame->printDeck();
	cout << "-----------------------------------" << endl;
	newGame->shuffleDeck();
	newGame->shuffleDeck();
	newGame->printDeck();
	cout << "-----------------------------------" << endl;

	newGame->InitDealerHand();
	newGame->InitPlayerHand();
	cout << "DEALER HAND" << endl;
	newGame->printDealerHand();
	cout << newGame->getDealerWeight() << endl;
	cout << "-----------------------------------" << endl;
	cout << "PLAYER HAND" << endl;
	newGame->printPlayerHand();
	cout << newGame->getPlayerWeight() << endl;






	cin.get();


}
